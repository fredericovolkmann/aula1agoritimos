# include <stdio.h>
#include <stdlib.h>
#include <time.h>
 void shuffle(int *array, size_t n)
    {
        if (n > 1) 
        {
            size_t i;
            for (i = 0; i < n - 1; i++) 
            {
            size_t j = i + rand() / (RAND_MAX / (n - i) + 1);
            int t = array[j];
            array[j] = array[i];
            array[i] = t;
            }
        }
    }
int main () {
    
    int n[10];
    for(int i=0; i<10; i++){
        n[i]=i;
    }

    shuffle(n,10);
    for(int i = 0; i < 10; i++) {
     printf("%d\n",n[i]);
}
return 0;
} 
    
   

