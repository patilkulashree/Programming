//Problem Statement : Accept the total purchase amount and calculate the final payable amount after applying the following discount
//Negative purchase amounts are invalid

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float famount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;


    if(famount < 0)
    {
        printf("Invalid purchase amount \n");
    }
    else if(famount < 1000)
    {
        fDiscount=0;
    }
    else if(famount >= 1000 && famount <5000)
    {
        fDiscount = famount * 10 / 100;
    }
    else
    {
        fDiscount = famount * 20 /100;
    }
    if(famount >= 0)
    {
        fFinalAmount = famount - fDiscount;
        printf("Payable Amount = %.2f\n",fFinalAmount);
    }
}
int main()
{
    float famount = 0.0f;

    printf("Enter purchase amount :");
    scanf("%f",&famount);

    CalculateDiscount(famount);
    return EXIT_SUCCESS;
}