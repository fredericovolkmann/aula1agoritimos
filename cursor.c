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

void desenhar_retangulo(int x1, int y1, int x2, int y2,int t)
{
    int l1;
    int l2;
    int l3;
    int l4;
    int x;
    int n;
    int y;
    int num;
    

    for (l1 = y1; l1 < y2; l1++)
    {

        sleep_ms(t);
        gotoxy(x1, l1);
        printf("*");
        fflush(stdout);
    }

    for (l2 = x1; l2 < x2; l2++)
    {

        sleep_ms(t);
        gotoxy(l2, y2);
        printf("*");
        fflush(stdout);
    }
    for (l3 = y2; l3 > y1; l3--)
    {

        sleep_ms(t);
        gotoxy(x2, l3);
        printf("*");
        fflush(stdout);
    }

    for (l4 = x2; l4 > x1; l4--)
    {

        sleep_ms(t);
        gotoxy(l4, y1);
        printf("*");
        fflush(stdout);
    }
    gotoxy(1, y2 + 1);
}


 int main(void){
    clear();
    for( int d=1;  d<30;d=d+3 ){
        
        desenhar_retangulo(10+d,1+d,50+d,10+d,5);
    }
     for( int d=1;  d<30;d=d+3 ){
    desenhar_retangulo(70+d,2+d,80+d,5+d,5);
     desenhar_retangulo(60+d,14+d,70+d,18+d,5);
     }
 }