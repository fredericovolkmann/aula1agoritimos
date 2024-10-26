#include <stdio.h>
#include <math.h>
float x;
float e;
float p;
int main(){
 printf("digite o numero de pintores: ");
 scanf("%f",&p);
 printf("digite o numero de escolas: ");
 scanf("%f",&e);

 x=(16*e)/(3*p);
 double arredondado = round(x);
printf("%f\n",arredondado);
return 0;
}