#include<stdio.h>
void main()
{
     int year, ans;

     printf("Enter The Year ");
     scanf("%d",&year);

    ans=year%4;

     if(ans==0)
     {
          printf("%d is millineum year",year);
     }
     else
     {
        printf("\n%d is not millineum year",year);
     }
     
}