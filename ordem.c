# include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    int tam = 30;
    int n[tam];
    int i = 0;
    int x;
    
    while(i<tam){
        int dentro=0;
        x=rand()%1000;
     for(int j = 0; j < i; j++) {
        
        if(n[j]==x){dentro=1;
        break;}
       
     }
     if (dentro==0){n[i]=x;
     i++;
     
     }
    }


 for(int i = 0; i < tam; i++) {
     printf("%d: %d\n", i, n[i]);
}

}