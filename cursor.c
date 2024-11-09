#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define clear() printf("\033[H\033[J")
#define gotoxy(x, y) printf("\033[%d;%dH", (y), (x))

// ********************************

#ifdef WIN32
#include <windows.h>
#elif _POSIX_C_SOURCE >= 199309L
#include <time.h> // for nanosleep
#else
#include <unistd.h> // for usleep
#endif

void sleep_ms(int milliseconds)
{ // cross-platform sleep function
#ifdef WIN32
    Sleep(milliseconds);
#elif _POSIX_C_SOURCE >= 199309L
    struct timespec ts;
    ts.tv_sec = milliseconds / 1000;
    ts.tv_nsec = (milliseconds % 1000) * 1000000;
    nanosleep(&ts, NULL);
#else
    if (milliseconds >= 1000)
        sleep(milliseconds / 1000);
    usleep((milliseconds % 1000) * 1000);
#endif
}

int main(void)
{
    int l1;
    int l2;
    int l3;
    int l4;
    int x;
    int n;
    int y;
    int num;
    clear();

    for (l1 = 1; l1 < 10; l1++)
    {
        
        
    
        sleep_ms(50);
        gotoxy(50,l1);
        printf("*");
        fflush(stdout);

        
    }

    for ( l2 = 50; l2 < 90; l2++)
    {
        
        
        sleep_ms(50);
        gotoxy(l2,10);
        printf("*");
        fflush(stdout);
    }
  for (l3 = 10; l3 > 1; l3--)
    {
        
        
    
        sleep_ms(50);
        gotoxy(90,l3);
        printf("*");
        fflush(stdout);

        
    }

for ( l4 = 90; l4 > 50; l4--)
    {
        
        
        sleep_ms(50);
        gotoxy(l4,1);
        printf("*");
        fflush(stdout);
    }
 gotoxy(1,91);
}