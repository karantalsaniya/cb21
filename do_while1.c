#include <stdio.h>
void main()
{
    int num = 0, first=3;
    int sp = 0;
    for (num = 0; num < 6; num++)
    {
        printf("*");
    }
   for (first= 0; first < 3; first--)
   {
    printf("\n"); 
    printf("*");
    for (sp = 0; sp < first; sp++)
    {
        printf("_");
    }
    printf("*");
   }
    

    // printf("\n");
    // printf("*");
    // for (sp = 0; sp < 2; sp++)
    // {
    //     printf("_");
    // }
    // printf("*");

    // printf("\n");
    // printf("*");
    // for (sp = 0; sp < 1; sp++)
    // {
    //     printf("_");
    // }
    // printf("*");

    printf("\n");
    for (num = 0; num < 2; num++)
    {
        printf("*");
    }

    printf("\n");
    for (num = 0; num < 1; num++)
    {
        printf("*");
    }
}