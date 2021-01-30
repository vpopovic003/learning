import os
import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import pyautogui
import glob
import re
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from selenium.common.exceptions import NoSuchElementException

driver = webdriver.Chrome(service_log_path='C:/junk/geckodriver.log')
driver.get('https://www.youtube.com/channel/UCfHsgrKGFWHYzP5XPbp4jsQ/videos')

title = '323. Miran Rubin - November 3, 2020'

video_published = False


while video_published == False:
    try:
        driver.find_element_by_xpath("//*[contains(text(), '" + title + "')]")
        #driver.find_element_by_xpath('//div[contains(text(), "{0}") and @class="inner"]'.format(title))
        video_published = True
        print('Publish done')
        time.sleep(10)
    except:
        print('not found')
        time.sleep(5)
