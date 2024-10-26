#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int d;
    int max_p = 5;
    char s[100];
    char saux[5];
    strcpy(s, "");

    for (int p = 1; p <= 9; p++)
    {

        sprintf(saux, "%d", p);
        strcat(s, ",");
        strcat(s, saux);
    }

    // mostra :-)
    printf("%s\n", s);

    for (int e = 1; e <= 12; e++)
    {
        sprintf(saux, "%d", e);
        strcpy(s, saux);

        for (int p = 1; p <= 9; p++)
        {
            d = (16 * e) / (3 * p);
            sprintf(saux, "%d", d);
            strcat(s, ",");
            strcat(s, saux);
        }
        printf("%s\n", s);
    }
    return 0;
}