# include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {
    
    int n[10];
    int i = 0;
    int x;
    
    while(i<10){
        int dentro=0;
        x=rand()%10;
     for(int j = 0; j < i; j++) {
        
        if(n[j]==x){dentro=1;
        break;}
       
     }
     if (dentro==0){n[i]=x;
     i++;
     
     }
    }


 for(int i = 0; i < 10; i++) {
     printf("%d\n",n[i]);
}

}