#https://sig.ifc.edu.br/sigaa/expirada.jsp (2 ENTER)
import pyautogui
import keyboard
import time
import getpass
#sites //no caso  para eu colocar outros site teria que fazer uns esquemas com if else elif por que cada site muda a tela de login mas eu vou fazer isso mais depois 
sigaa="sig.ifc.edu.br"

#materias
m=input("qual materia o usuario quer ver: ")
a=input("seu nome de usuario :")
print (a)
b=getpass.getpass("Digite a senha: ")
print(b)
print(a)

# Abrir o Navegador
pyautogui.press('win')  # Open Start menu

time.sleep(3)

pyautogui.write('chrome') # Type the application name                                                                                                  


time.sleep(4)

pyautogui.press('enter')  # Open the application

# Esperar o navegador abrir e pesquisar pelo site
time.sleep(7)

pyautogui.write (sigaa)
pyautogui.press ('Enter')

time.sleep(4)

# pyautogui.press ('Enter')
pyautogui.write (a) #Escreva seu nome de usuário

pyautogui.press ('tab') #Pular um
pyautogui.write (b) #Escreva sua senha

pyautogui.press ('Enter')

time.sleep(3)
pyautogui.keyDown('ctrl')
time.sleep(2)
pyautogui.press ('f')
pyautogui.keyUp('ctrl')
pyautogui.write(m)
pyautogui.keyDown('ctrl')
time.sleep(2)
pyautogui.press ('Enter')
pyautogui.keyUp('ctrl')
time.sleep(3) 
