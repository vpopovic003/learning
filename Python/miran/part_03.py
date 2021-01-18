
# Facebook Private Video Downloader - Python Script
# Vladimi Popovic - Astrov
# Kovin 10-Jan-2021

### using selenium to acces web
from selenium import webdriver
from selenium.webdriver.common.keys import Keys

#READ FILE LIST
urllist = 'C:/Users/Vladimir/github/miran_files/miranvideos.dat'
with open(urllist) as fp:
    videoUrl = fp.readline()

    cnt = 1
    while videoUrl:

        ### edit text
        videoUrlPrefix = 'view-source:'+videoUrl # dodavanje prefixa
        #videoUrlEdit = videoUrlPrefix.replace("www","m").strip() #menjanje teksta, strip uklanja space i new line
        videoUrlEdit = videoUrlPrefix.strip() # remove blank lines only

        #print(videoUrlEdit)

        #two different browsers/drivers (Chrome is default)
        PATH_Chrome = 'C:/Users/Vladimir/AppData/Local/Programs/Python/Python38/Scripts/chromedriver.exe' # to use Chrome
        PATH_Firefox = 'C:/Users/Vladimir/AppData/Local/Programs/Python/Python38/Scripts/geckodriver.exe' # to use Firefox
        driver = webdriver.Firefox(log_path='C:/Users/Vladimir/github/miran_files/geckodriver.log')

        #open page
        driver.get(videoUrlEdit)
        page_source = driver.find_element_by_tag_name("body").text
        print(page_source)

        #Private FB Downloader page
        #driver.get('https://fbdownloader.net/private-facebook-downloader')
        #input_source = driver.find_element_by_name('url')
        #iIinput_source.send_keys(page_source)

        #click_download = driver.find_element_by_id("submit")
        #click_download.click()


        #test printanje u .txt
        #outputFile = open('C:/Users/Vladimir/github/miran_files/out{0:02d}.txt'.format(cnt),'w', encoding="utf-8")
        #print(pageSource, file=outputFile)

        videoUrl = fp.readline()
        cnt += 1
