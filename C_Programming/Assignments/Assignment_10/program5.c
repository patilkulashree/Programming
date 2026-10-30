#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iValue)
{
    double SqMeter;
    SqMeter = iValue * 0.0929;
    return SqMeter;
}
int main()
{
    float fArea = 0.0f, iRet = 0.0f ;

    printf("Enter Area in square feet \n");

    scanf("%f",&fArea);

    iRet = SquareMeter(fArea);
    printf("Area is %f",iRet);
    return EXIT_SUCCESS;
}