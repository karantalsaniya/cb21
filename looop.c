// piramid
#include <stdio.h>
void main()

{
    int count = 0, num=0;
    int space = 0, spa=0;

for (num=5; num>0; num--)
{
    for (count = 0; count < num; count++)
    {
        printf("_");
    }
    printf("*");
    for (space = 0; space<spa; space++)
    {
        printf("_");
    }
    printf("\n");
    count = 0;
}

    
    for (count = 0; count < 4; count++)
    {
        printf("_");
    }
    printf("*");
    for (space = 0; space < 1; space++)
    {
        printf("_");
    }
    printf("*");
    printf("\n");
    count = 0;
    for (count = 0; count < 3; count++)
    {
        printf("_");
    }
    printf("*");
    for (space = 0; space < 3; space++)
    {
        printf("_");
    }
    printf("*");

    printf("\n");
    count = 0;
    for (count = 0; count < 2; count++)
    {
        printf("_");
    }
    printf("*");
    for (space = 0; space < 5; space++)
    {
        printf("_");
    }
    printf("*");

    printf("\n");
    count = 0;
    for (count = 0; count < 1; count++)
    {
        printf("_");
    }
    printf("*");
    for (space = 0; space < 7; space++)
    {
        printf("_");
    }
    printf("*");

    printf("\n");
    count = 0;
    for (count = 0; count < 0; count++)
    {
        printf("_");
    }
    printf("*");
    for (space = 0; space < 5; space++)
    {
        printf("_");
        printf("*");
    }
    
}