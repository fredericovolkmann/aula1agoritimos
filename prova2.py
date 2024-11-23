'''pedir as medidas do terreno comprimento e largura
pedir as medidas da casa 
 depois some todos os lado do terreno e da casa separadamente 
 pegue o resultado do terreno (T) e subitraia com o da casa (==> area livre - AL)
 pegue a soma total do lote e divida pela subtração feita 
 pegue o resultado e mutiplique por 100
 essa é a porcentagem que sobrou'''
lt=int(input("digite quantos metros tem lado do terreno: "))
ct=int(input("digite o comprimento da largura  do terreno: "))
lc=int(input("digite quantos metros tem o largura de um lado da casa: "))
cc=int(input("digite o comprimento de um lado da casa: "))
T=lt*ct
C=lc*cc
L=T-C
P=(L/T)*100

print(f' {L} area livre {P} porcentagem da area livre')
