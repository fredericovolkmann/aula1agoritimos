#include <stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;
    printf("digite um numero:");
    scanf("%d,%d,%d", &num1, &num2, &num3);

    if (num1 < num2)
    {
        if (num2 < num3)
        {
            printf("%d, %d, %d", num1, num2, num3);
        }
        else
        {
            if (num1 < num3)
            {
                printf("%d, %d, %d", num1, num3, num2);
                printf("%d, %d, %d",num3, num1, num2);
            }
        }
    }
    else
    {
        if (num1 < num3)
        {
            printf("%d, %d, %d",num2, num1, num3);
        }
        else
        {
            if (num2 < num3)
            {
                printf("%d, %d, %d",num2, num3, num1);
            }
            else
            {
                printf("%d, %d, %d",num2, num3, num1);
            }
        }
    }
    return 0;
}