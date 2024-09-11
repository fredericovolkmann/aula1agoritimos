#include <stdio.h>
int main() {
   int n[10];
   int vezespassou = 0; 
   int trocou;
   for(int i = 0; i < 10; i++){
    printf("digite um numero:");
    scanf("%d", &n[i]);

   }
  for (vezespassou = 0; vezespassou < (9); vezespassou++){
     trocou = 0;
     for(int i = 0; i < ((9)- vezespassou); i++){
        if(n[i] > n[i+1]) {
            trocou = 1;
            int temp = n[i];
            n[i] =n[i+1];
            n[i+ 1] = temp; 
       }

     }
    if(trocou == 0) {
        break;
    }
  }
for(int i = 0; i < 10; i++) {
     printf("%d\n",n[i]);
}
    return 0;
}