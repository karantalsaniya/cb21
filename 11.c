#include <stdio.h>
void main()
{
    int count = 0, new = 6;

    while (new >= 0)
    {
        while (count < new)
        {
            printf("*");
            count = count + 1;
        }
        count = 0;
        printf("\n");
        new = new - 1;
    }

    //  while (count < 5)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
    // count=0;
    // printf("\n");

    //  while (count < 4)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
    // count=0;
    // printf("\n");

    //  while (count < 3)
    // {
    //     printf("*");
    //     count = count + 1;
    // }
}
