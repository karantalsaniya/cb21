#include <stdio.h>
void main()
{
    int num[5];
    int count=0;
for (count=0; count<5; count++)
{
   printf("Enter the mark of sunject %d ",count+1);
   scanf("%d",&num[count]);
}
printf("\n");
for (count=0; count<5; count++)
{
    printf("Mark of sunject %d is %d \n",count+1,num[count]);
}


if (num[0]>num[1])
{
    printf("Mark of sunject  %d \n ",num[0]);
}

if (num[1]>num[2])
{
    printf("Mark of sunject  %d \n",num[1]);
}

if (num[2]>num[3])
{
    printf("Mark of sunject  %d \n",num[2]);
}

if (num[3]>num[4])
{
    printf("Mark of sunject  %d \n",num[3]);
    printf("Mark of sunject  %d ",num[4]);
}

else
{
    printf("soory");
}

// if(num[0]>num[0] ||num[0]>num[1] || num[0]>num[2] || num[0]>num[3] || num[0]>num[4])
    
//     {
//    printf("Mark of sunject 1 is %d \n",num[0]);
//     }

//    else if(num[0]>num[0] ||num[0]>num[1] || num[0]>num[2] || num[0]>num[3] || num[0]>num[4])
    
//     {
//    printf("Mark of sunject 1 is %d \n",num[0]);
//     }


    // printf("Mark of sunject 1 is %d \n",num[2]);
    // printf("Mark of sunject 1 is %d \n",num[3]);
    // printf("Mark of sunject 1 is %d \n",num[4]);
    
    
    


}