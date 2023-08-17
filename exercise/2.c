// write a prgoram to findout whether given year is milinium year or not.
#include <stdio.h>
void main()
{
    int year = 0;
    printf("enter the year ");
    scanf("%d",&year);

    

    if (year%1000==0)
       {
        printf("Year is milinium");
     }
       else
{
      printf("Year is not milinium");
}
  }