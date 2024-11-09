#https://sig.ifc.edu.br/sigaa/expirada.jsp (2 ENTER)
import pyautogui
import keyboard
import time
import getpass
a=input("seu nome no sigaa: ")
b=getpass.getpass("Digite a senha: ")
print(b)
# Abrir o Navegador
pyautogui.press('win')  # Open Start menu

time.sleep(3)

pyautogui.write('chrome') # Type the application name                                                                                                  


time.sleep(4)

pyautogui.press('enter')  # Open the application

# Esperar o navegador abrir e pesquisar pelo site
time.sleep(7)

pyautogui.write ('sig.ifc.edu.br')
pyautogui.press ('Enter')

time.sleep(7)
pyautogui.press ('Enter')
# pyautogui.press ('Enter')
pyautogui.write (a) #Escreva seu nome de usuário
time.sleep(2)
pyautogui.press ('tab') #Pular um
pyautogui.write (b) #Escreva sua senha
time.sleep(2)
pyautogui.press ('Enter')

time.sleep(3)
pyautogui.keyDown('ctrl')
time.sleep(2)
pyautogui.press ('f')
pyautogui.keyUp('ctrl')
pyautogui.write('algoritimos')
pyautogui.keyDown('ctrl')
time.sleep(2)
pyautogui.press ('Enter')
pyautogui.keyUp('ctrl')
time.sleep(3)