import pyautogui
from time import sleep
sleep(5)

for i in range(0, 1000):
    pyautogui.write('?', interval=0.25)
    pyautogui.press('enter')