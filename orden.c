#include <stdio.h>
int main()
{
 int num1,num2;
 printf("digite o primeiro numero: ");
 scanf("%d",&num1);
  
  printf("digite um numero:");
  scanf("%d",&num2);

  if (num1>num2) {
      printf("o maior numero é %d\n",num1);
  } else {
    printf("o maior numero é %d\n",num2);

  }

 return 0;

}