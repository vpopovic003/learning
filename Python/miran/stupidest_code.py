### Here is tried to make script wait for a period of time
### or a key stroke. Little to say that I failed miserably.
### This is the stupidest code ever :D

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

driver.implicitly_wait(10)
x = input('ok: ')
print('done')
