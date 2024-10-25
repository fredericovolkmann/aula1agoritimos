#include <stdio.h>//biblioteca basica sempre coloque
#include <stdlib.h>//bibliotecam de sorteio
#include <time.h>//biblioteca de tempo
#include <math.h>//biblioteca de matematica
int main () {
//declarei as varialveis 
int a;
int b;
int c;
int x;
double r=1;
int contador=0;
//pedi numeros dasvariaveis a,b,c pro usuario
printf("digite o valor de a: ");
scanf("%d",&a);
printf("digite o valor de b: ");
scanf("%d",&b);
printf("digite o valor de c: ");
scanf("%d",&c);

srand(time(NULL));//semente para o sorteador noa começar do 1 e começar com o tempo atual 

do {
    x=rand()%100;//sorteador
    r=(pow(x,2)*a+b*x+c);//equação
    contador++;//adiciona no contador 
} while (r != 0 && contador < 10000);//em quanto isso for verdade vai fazer o loop

if (r == 0) {// se r for igual a 0 ele da printf no x
    printf("Solução encontrada: x = %d\n", x);
} else {//se nao ele printa o contador 
    printf("Nenhuma solução encontrada após %d tentativas.\n", contador);
}
return 0;
}
//lemprar quando for compilara vai ter que colocar o -lm depois do nome do arquivo 






