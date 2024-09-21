#include <stdio.h>

int main() {
int N;
int H;
double S;
scanf("%d",&N);
scanf("%d",&H);
scanf("%lf",&S);
double valor=H*S;
printf("NUMBER = %d\n",N);
printf("SALARY = U$ %.2lf\n",valor);
return 0;
}