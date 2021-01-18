# Facebook Private Video Downloader v2 - Python Script
# Vladimi Popovic - Astrov
# Kovin 11-Jan-2021

### using selenium to acces web
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import requests
import time

f = open("C:/Users/Vladimir/github/miran_files/out.txt")
page_source = f.read()

driver = webdriver.Firefox(service_log_path='C:/Users/Vladimir/github/miran_files/geckodriver.log')
        ### Video Download Page
driver.get('https://downloadfacebook.net/en/facebook-private-video-downloader.html')



#name_index = 1
#while name_index < 4:

driver.get('https://downloadfacebook.net/en/facebook-private-video-downloader.html')
time.sleep(3)
driver.get('https://www.facebook.com')
time.sleep(3)
driver.get('https://www.google.com')
    #name_index += 1
