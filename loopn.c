#include <stdio.h>
void main()
{
    int num[3];
    int count=0;
for (count=0; count<3; count++)
{
   printf("Enter the mark of sunject %d ",count+1);
   scanf("%d",&num[count]);
}
printf("\n");
for (count=0; count<3; count++)
{
    printf("Mark of sunject %d is %d \n",count+1,num[count]);
}

if (num[0]>num[1] && num[0]>num[2] && num[1]>num[2])
{
    printf("Mark of sunject in decending order\n%d \n%d \n%d",num[0],num[1],num[2]);   
}

else if (num[0]>num[1] && num[0]>num[2] && num[2]>num[1] )
{
    printf("Mark of sunject in decending order\n%d \n%d \n%d",num[0],num[2],num[1]);   
}

else if (num[1]>num[0] && num[1]>num[2] && num[0]>num[2] )
{
    printf("Mark of sunject in decending order\n%d \n%d \n%d",num[1],num[0],num[2]);   
}

else if (num[1]>num[0] && num[1]>num[2] && num[2]>num[0] )
{
    printf("Mark of sunject in decending order\n%d \n%d \n%d",num[1],num[2],num[0]);   
}

else if (num[2]>num[0] && num[2]>num[1] && num[0]>num[1] )
{
    printf("Mark of sunject in decending order\n%d \n%d \n%d",num[2],num[0],num[1]);   
}

else if (num[2]>num[0] && num[2]>num[1] && num[1]>num[0] )
{
    printf("Mark of sunject in decending order\n%d \n%d \n%d",num[2],num[1],num[0]);   
}


}