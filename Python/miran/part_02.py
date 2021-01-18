
#READ FILE LIST
urllist = open("C:/Users/Vladimir/github/miran_files/miranvideos3.dat", "r")

while (True):

    videoUrl = urllist.readline()
    videoUrl = videoUrl.rstrip("\n")
        ### edit teksta
    videoUrlPrefix = 'view-source:'+videoUrl # dodavanje prefixa
        #videoUrlEdit = videoUrlPrefix.replace("www","m").strip() #menjanje teksta, strip uklanja space i new line

    if not videoUrl:
        break

    print(videoUrlPrefix)

        ### pristup source-code-u stranice
        #from selenium import webdriver

        #driver = webdriver.Firefox()#(executable_path='C:/Users/Vladimir/github/miran/geckodriver.exe')
        #driver.get(videoUrlEdit)
        #pageSource = driver.find_element_by_tag_name("body").text
        #driver.quit()

        #samo printanje u .txt
        #outputFile = open('C:/Users/Vladimir/github/miran_files/out{0:02d}.txt'.format(cnt),'w', encoding="utf-8")
        #print(pageSource, file=outputFile)
