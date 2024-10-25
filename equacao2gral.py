import math#biblioteca de matematica

def bhaskara(a, b, c):
  

  if a == 0:#se a for igual a 0 ele retona
    return

  delta = b**2 - 4*a*c #equação

  if delta < 0:# se o delta for menor que 0 ele retorna   a nao a raizes
    return None  # Não há raízes reais
  elif delta == 0:# se  delta dar 0  em tao vai se fazer a conta
    x = -b / (2*a)
    return x,#retorna a x
  else:# se nao faz a conta de delta x1,x2
    x1 = (-b + math.sqrt(delta)) / (2*a)
    x2 = (-b - math.sqrt(delta)) / (2*a)
    return x1, x2

# Exemplo de uso: peso ao usuario as variaveis
a = float(input("Digite o valor de a: "))
b = float(input("Digite o valor de b: "))
c = float(input("Digite o valor de c: "))

raizes = bhaskara(a, b, c)

if raizes:
  if isinstance(raizes, tuple):# isinstance permite verificar se um objeto é uma instância de uma determinada classe ou de uma tupla de classes.
    print("As raízes são:", raizes)
  else:# se nao posui uma raiz dubla
    print("A equação possui uma raiz dupla:", raizes)
else:# se nao nao a raiz ele pertence ao if da linha 28 lembre que nao pode dar dos else em um mesmo if
  print("Não há raízes reais.")
