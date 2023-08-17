//write a program to accept month number from user. display message "this month has 28 or 29 days" if month if february

#include<stdio.h>
void main()
{
  int num = 0;
  printf("Enter The Numner Of Month ");
  scanf("%d",&num);
   
if (num==2)
{
    printf("this month has 28 or 29 days");
}

else
{
    printf("this month other than february");
}
}