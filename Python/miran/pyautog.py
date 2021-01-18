import os
import glob
import pyautogui
import time

import re
numbers = re.compile(r'(\d+)')

#time.sleep(3)

def numericalSort(value):
    parts = numbers.split(value)
    parts[1::2] = map(int, parts[1::2])
    return parts

dirloc = r"C:\396\Atmosfera"

#for file in os.scandir(dirloc):
    #if file.path.endswith(".mp4") and file.is_file():
        #print(file.path)

        #video_title = file.path.replace("C:\\396\\Miran Rubin\\", "")
        #video_title = video_title.replace(".mp4", "")
        #video_title = video_title.replace(";", ":")
        #print('aaa')

        #pyautogui.write(file.path)
        #pyautogui.press('enter')

for file in sorted(glob.glob("C:\\396\\Atmosfera\\*.mp4"), key=numericalSort):
    print(file)
#video_location = ('C:\396\Miran Rubin\135 Miran Rubin - July 21, 2020.mp4')
#video_location = video_location.replace("\\","\\")
