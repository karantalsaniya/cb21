//Write a C program to calculate final electricity bill based upon below given criteria. 
// take monthly electricity unit from user as input.
#include<stdio.h>
void main()
{
    float monthly_unit=0  ,total_bill_amount=0 ,total_amount=0 ;
    printf("Enter Monthly Electricity Unit ");
    scanf("%f",&monthly_unit);

    printf("Monthly Electricity Unit is %0.2f Unit",monthly_unit);

    if (monthly_unit<100)
    {
         total_bill_amount=(monthly_unit*1);
         printf("\ntotal Monthly Electricity bill amount is %0.2f rupee",total_bill_amount);
         total_amount=(total_bill_amount*1.05);
         printf("\ntotal  Monthly Electricity bill amount with 5 percentage energy charge is %0.2f rupee",total_amount);
    }

    else if (monthly_unit>=100 && monthly_unit<200)
    {
         total_bill_amount=(monthly_unit*2);
         printf("\ntotal bill amount Monthly Electricity bill amount is %0.2f rupee",total_bill_amount);
         total_amount=(total_bill_amount*1.05);
         printf("\ntotal  Monthly Electricity bill amount with 5 percentage energy charge is %0.2f rupee",total_amount);
    }
    else if (monthly_unit>=200 && monthly_unit<300)
    {
         total_bill_amount=(monthly_unit*3);
         printf("\ntotal bill amount Monthly Electricity bill amount is %0.2f rupee",total_bill_amount);
         total_amount=(total_bill_amount*1.05);
         printf("\ntotal  Monthly Electricity bill amount with 5 percentage energy charge is %0.2f rupee",total_amount);
    }
    else if (monthly_unit>=300 && monthly_unit<400)
    {
         total_bill_amount=(monthly_unit*4);
         printf("\ntotal bill amount Monthly Electricity bill amount is %0.2f rupee",total_bill_amount);
         total_amount=(total_bill_amount*1.05);
         printf("\ntotal  Monthly Electricity bill amount with 5 percentage energy charge is %0.2f rupee",total_amount);
    }
    else if (monthly_unit>=400)
    {
         total_bill_amount=(monthly_unit*5);
         printf("\ntotal bill amount Monthly Electricity bill amount is %0.2f rupee",total_bill_amount);
         total_amount=(total_bill_amount*1.05);
         printf("\ntotal  Monthly Electricity bill amount with 5 percentage energy charge is %0.2f rupee",total_amount);
    }


}