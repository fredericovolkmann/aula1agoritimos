#iniciar contador
c = 0
#iniciar acumulador 
a = 0
#repetir 10 vezes 
for x in range (1,11):
    #pedir o numero 
    n = int(input("digite um numero:"))
    #somar o numero no acumulador 
    a = a + n
    #incrementar no  contador 
    c = c + 1
    #dividir o acumulador pelo contador
    r = a/c
    #mostrar resultado
    print(r)
#mostrar resultado final
print(r)