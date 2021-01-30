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
driver.get('https://www.blic.rs')



try:
    element = WebDriverWait(driver, 3).until(lambda driver: driver.find_elements(By.XPATH,"//*[text()='dziberish']") or driver.find_elements(By.XPATH,"//*[text()='Sport']"))
    print('found')

except:
    print('not found')
