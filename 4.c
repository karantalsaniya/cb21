// Write a programe to findout bmi category of user
#include <stdio.h>
void main()
{
    int weight = 0, feet = 0, inch = 0;
    float meter_feet = 0, meter_inch = 0, meter = 0, bmi = 0;
    printf("Entre the Value of weight ");
    scanf("%d", &weight);
    printf("Entre the Value of feet ");
    scanf("%d", &feet);
    printf("Entre the Value of inch ");
    scanf("%d", &inch);

    meter_feet = (feet / 3.281), meter_inch = (inch / 39.37);
    meter = (meter_feet + meter_inch);

    printf("Value of meter is %0.2f", meter);

    bmi = (weight / (meter * meter));

    printf("\nValue of bmi is %0.2f\n" , bmi);

    if (bmi < 16)
    {
        printf("Person is Severe Thinness");
    }
    else if (bmi > 16 || bmi < 17)
    {
        printf("Person is Moderate Thinness");
    }
    else if (bmi > 17 || bmi < 18.5)
    {
        printf("Person is Mild Thinness");
    }
    else if (bmi > 18.5 || bmi < 25)
    {
        printf("Person is Normal ");
    }
    else if (bmi > 25 || bmi < 30)
    {
        printf("Person is Overweight");
    }
    else if (bmi > 30 || bmi < 35)
    {
        printf("Person is Obese Class-1");
    }
    else if (bmi > 35 || bmi < 40)
    {
        printf("Person is Obese Class-2");
    }
    else if (bmi > 40 )
    {
        printf("Person is Obese Class-3");
    }

}
