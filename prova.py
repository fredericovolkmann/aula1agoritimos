''' questao 1:
 crie uma variavel T que passa quantos minutos o usuario quer
   faça variave H que é  uma divisao exata  da variavel T por 60
   pegue a sobra e mutiplique por 60   x=H%*60
    de  um print t horas x minutos '''
 
T=int(input("quantos minutos: "))
H=T//60
X=T%60
s=0

print (f'{H}horas {X}minutos {s}segundos')
