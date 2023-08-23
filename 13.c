#include <stdio.h>
void main()
{
    int num = 5, new = 6, old = 1;

    while (num <= 5 && num > 0)
    {
        while (num <= new &&num > 0)
        {
            printf("%d", num);
            num = num - 1;
        }
        printf("\n");

        new = new - old;
        num = new - old;
    }

    // while (num <= 4 && num>0)
    // {
    //     printf("%d", num);
    //     num = num - 1;
    // }
    // printf("\n");
    // num = 3;

    // while (num <= 3 && num>0)
    // {
    //     printf("%d", num);
    //     num = num - 1;
    // }
    // printf("\n");
    // num = 2;

    // while (num <= 2 && num>0)
    // {
    //     printf("%d", num);
    //     num = num - 1;
    // }
    // printf("\n");
    // num = 1;

    // while (num <= 1 && num>0)
    // {
    //     printf("%d", num);
    //     num = num - 1;
    // }
}