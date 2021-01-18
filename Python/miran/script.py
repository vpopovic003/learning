# Facebook Private Video Downloader v2 - Python Script
# Vladimi Popovic - Astrov
# Kovin 11-Jan-2021

### using selenium to acces web
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import requests
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
import time
from bs4 import BeautifulSoup

### Function: Log in Facebook
def fb_login():
    user_name = open("C:/Users/Vladimir/github/miran_files/username.txt", "r").readline()
    password = open("C:/Users/Vladimir/github/miran_files/password.txt", "r").readline()
    input_email = driver.find_element_by_id("email")
    input_email.send_keys(user_name)
    input_pass = driver.find_element_by_id("pass")
    input_pass.send_keys(password)
    input_email.send_keys(Keys.ENTER)

def find_date(video_date):
    try:
        element = WebDriverWait(driver, 300).until(
            EC.presence_of_element_located((By.XPATH, "/html/body/div[1]/div/div[1]/div[1]/div[3]/div/div/div[1]/div[1]/div/div/div[2]/div/div/div[1]/div/div/div[1]/div[1]/div[2]/div/div[2]/span/span/span[2]/span/a"))
        )
        #time.sleep(2)
        date_p = driver.find_element_by_xpath("/html/body/div[1]/div/div[1]/div[1]/div[3]/div/div/div[1]/div[1]/div/div/div[2]/div/div/div[1]/div/div/div[1]/div[1]/div[2]/div/div[2]/span/span/span[2]/span/a")
        date_posted = ("date")
        date_posted = date_p.get_attribute('aria-label')
        date_posted_edit = date_posted.replace(":",";")
        return date_posted_edit
    finally:
        print('Date: ' + date_posted)

def download_page_1(page_source):
    driver.get('https://downloadfacebook.net/en/facebook-private-video-downloader.html')
    input_source = driver.find_element_by_id('facebook-private-video')
    driver.execute_script('arguments[0].value=arguments[1]', input_source, page_source)
    submit_button = driver.find_element_by_xpath("/html/body/main/section[1]/div/div/div/div[2]/form/button/span").click()
    try:
        download_button = driver.find_element_by_xpath("/html/body/main/section[2]/div/div[2]/table/tbody/tr[1]/td[5]/a")
        download_url = download_button.get_attribute('href')
    except:
        print("No HD on download page 1.")
        download_url = False
    return download_url

def download_page_2(page_source):
    driver.get('https://fbdown.online/private-video-downloader')
    input_source = driver.find_element_by_id('privateVideoText')
    driver.execute_script('arguments[0].value=arguments[1]', input_source, page_source)
    submit_button = driver.find_element_by_id('downloadPrivateButton').click()
    try:
        element = WebDriverWait(driver, 300).until(
            EC.presence_of_element_located((By.XPATH, "/html/body/div/div[4]/div/div[2]/div[2]/div/div/table/tbody/tr[1]/td[4]/a"))
        )
        try:
            download_button = driver.find_element_by_xpath("/html/body/div/div[4]/div/div[2]/div[2]/div/div/table/tbody/tr[2]/td[4]/a")
            download_url = download_button.get_attribute('href')
        except:
            print("No HD on download page 2.")
            download_url = False
    except:
        download_url = False
    return download_url

def download_page_3(page_source):
    driver.get('https://getfbstuff.com/facebook-private-video-downloader') # Open Page
    input_source = driver.find_element_by_id('sourceHTML') # Find Box
    driver.execute_script('arguments[0].value=arguments[1]', input_source, page_source) # Paste Source (JavaScript)
    submit_button = driver.find_element_by_xpath("/html/body/section/div/div/div/div[1]/div/form/div/div/center/button").click() # Click First Download button
    try:
        element = WebDriverWait(driver, 300).until(
            EC.presence_of_element_located((By.XPATH, "/html/body/section/div/div/div/div/div/div[2]/p")) #wait for blue box text, just to confirm page load
        )
        dl_button = driver.find_element_by_xpath("div/div/div[1]/div/div[2]/center/a") # Find Second Download Button
        download_url = dl_button.get_attribute('href') # Get Button URL
        return download_url
    except:
        download_url = False
        print("No HD on download page 2.")
    return download_url

### Funtion: Print to File
def file_output(output):
    output_file = open('C:/Users/Vladimir/github/miran_files/out.txt','w', encoding="utf-8")
    print(output, file=output_file)

###================== MAIN =================###

driver = webdriver.Firefox(service_log_path='C:/Users/Vladimir/github/miran_files/geckodriver.log') #Open page
driver.get('https://www.facebook.com')
facebook_login = fb_login() #FACEBOOK LOGIN FUNCTION
time.sleep(5)

# Scan Url List
urllist = open("C:/Users/Vladimir/github/miran_files/miranlives.txt", "r")
url = urllist.readline()


count = 1 # Naming videos in loop
while url:

    url = url.rstrip("\n") # stripping blank space
    if not url: # break looop if no more lines in file
        break
    countprint = str(count)
    print('')
    print('URL ' + countprint + ': ' + url) # Control print in console (current video in progress)

    driver.get(url) # Open video page
    #time.sleep(2)
    page_source = driver.page_source
    #output = file_output(page_source)

    date_posted = find_date(url) # FIND DATE FUNCTION

    download_url = download_page_1(page_source) # DOWNLOAD VIDEO PAGE FUNCTION
    if download_url == False:
        download_url = download_page_2(page_source)
    if download_url == False:
        download_url = download_page_3(page_source)

    if download_url == False:
        count += 1 # Increment name index for everz loop
        url = urllist.readline()
    else:
        r = requests.get(download_url) # Get URL
        print('downloading...')
        video_name = ("C:/396/Miran Rubin/{0} Miran Rubin - {1}.mp4".format(count, date_posted)) # Naming in Loop
        open(video_name, 'wb').write(r.content) # Save Video
        print("{0} Miran Rubin - {1}.mp4".format(count, date_posted))
        count += 1 # Increment name index for everz loop
        url = urllist.readline()
