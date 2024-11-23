'''calculo que mostre a quantidade de litros de combustivel gasto em uma viagem
a autonomia do carro ja foi estabelecida em 12 Km/L
deve-se fornecer o tempo gasto na viagem (em horas)
a velocidade media  durante a mesma (em km)
assim se obtem a distancia percorrida
e em seguida calcular quantos litros seriam necessarios.mostrar valor com 3 casas decimais apos o ponto'''
T=int(input("digite o tempo gasto na viagem em horas: "))
V=float(input("qual a velocidade media durante a viagem: "))
'calculo da distancia percorrida'
D=T*V
'quantos litros nessesarios'
L=12
X=D/L
print(f"{X:.3f}")
