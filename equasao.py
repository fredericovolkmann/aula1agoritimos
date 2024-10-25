'''

1 pessa ao usuario  as variavel A,B,c

2 escolhe um x aleatorio
3 fazer uma espreção a*x²+b*x*c (r)
4  se r for 0 
    5  mostra x, tem raiz
6 se nao 
  7 volta para o passo 2
  
  
  
inicializar o contador de sorteios com 0
repita sempre
    2 escolhe um x aleatorio
     adiciona 1 no contador de sorteios
    3 fazer uma espreção a*x²+b*x*c (r)
    4  se r for 0 
        5  mostra x, tem raiz
        6 sai do loop
    7  si fez mais de 100000 sorteios 
      8 sai do loop
  
  
  
  
fazer um codigo  que teste numeros aleatorios no x ate a formula de certo 
'''
import math
import random
contador=0

a = float(input("digite um numero de a"))
b = float(input("digite um numero de b"))
c = float(input("digite um numero de c"))

r=1  

while r!=0:
    if contador==100000:
        break
    x= random.randrange(0,100)
    r=(a*x**2+b*x+c)
    contador += 1
print(contador)
if r == 0:
    print(x)
