#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{

    return (fTemp - 32) * (5.0 / 9.0); 
    
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("Celsius of given temperature is %f",dRet);
    return EXIT_SUCCESS;
}
