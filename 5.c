// Write a C program to calculate income tax, gross income, net income from monthly income given by user
#include <stdio.h>
void main()
{
    float monthly_income = 0, Gross_income = 0, income_tax = 0, net_income = 0;

    printf("Entre the Value of Monthly Income = ");
    scanf("%f", &monthly_income);

    Gross_income = (12.00 * monthly_income);

    printf("\nGross income is %0.2f", Gross_income);

    if (Gross_income < 300000)
    {
        income_tax = Gross_income * 0.05;
        net_income = Gross_income - income_tax;
        printf("\nIncome Tax is %.2f", income_tax);
        printf("\nNet Income is %.2f", net_income);
    }

    else if (Gross_income >= 300000 && Gross_income < 500000)
    {
        income_tax = Gross_income * 0.1;
        net_income = Gross_income - income_tax;
        printf("\nIncome Tax is %.2f", income_tax);
        printf("\nNet Income is %.2f", net_income);
    }

    else if (Gross_income >= 500000 && Gross_income < 800000)
    {
        income_tax = Gross_income * 0.2;
        net_income = Gross_income - income_tax;
        printf("\nIncome Tax is %.2f", income_tax);
        printf("\nNet Income is %.2f", net_income);
    }

    else if (Gross_income >= 800000 )
    {
        income_tax = Gross_income * 0.3;
        net_income = Gross_income - income_tax;
        printf("\nIncome Tax is %.2f", income_tax);
        printf("\nNet Income is %.2f", net_income);
    }
}
