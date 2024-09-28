#include <stdio.h>
#include "expt2.h"

int main() {
     int n1;
    int n2;
    printf("digite um numero: ");
    scanf("%d",&n1);
    printf("digite um numero: ");
    scanf("%d",&n2);
    n1 = n1*2;
    n2 = n2*2;
    soma(n1,n2);

    return 0;
}
