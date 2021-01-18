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

f = open("C:/Users/Vladimir/github/miran_files/test_source.txt")
page_source = f.read()

driver = webdriver.Firefox(service_log_path='C:/Users/Vladimir/github/miran_files/geckodriver.log')
        ### Video Download Page

driver.get('https://fbdown.online/private-video-downloader')
time.sleep(2)
input_source = driver.find_element_by_id('privateVideoText')
time.sleep(2)
driver.execute_script('arguments[0].value=arguments[1]', input_source, page_source)
time.sleep(2)
submit_button = driver.find_element_by_id('downloadPrivateButton').click()
try:
    element = WebDriverWait(driver, 300).until(
        EC.presence_of_element_located((By.XPATH, "/html/body/div/div[4]/div/div[2]/div[2]/div/div/table/tbody/tr[1]/td[4]/a"))
    )
    try:
        browser.find_element_by_xpath("/html/body/div/div[4]/div/div[2]/div[2]/div/div/table/tbody/tr[2]/td[4]/a")
        download_button = driver.find_element_by_xpath("/html/body/div/div[4]/div/div[2]/div[2]/div/div/table/tbody/tr[2]/td[4]/a")
        download_url = download_button.get_attribute('href')
        print('downloading...')
    except:
        print("Transfering to download method 3...")
finally:
    print('vladimir, hvala.')
