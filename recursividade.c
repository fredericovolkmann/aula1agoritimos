#include <stdio.h>
int fatorial(int n){
  if(n==1)
  return 1;
else 
 return n*fatorial(n-1);
}
int main(){
printf("digite um numero: ");
int n;
scanf("%d",&n);
int x;
x = fatorial(n);
printf("%d\n",x);
return 0;

}







