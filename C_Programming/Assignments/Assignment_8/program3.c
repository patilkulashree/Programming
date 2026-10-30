#include<stdio.h>
#include<stdlib.h>

int Factorial(int ino)
{
    int iCnt = 0;
    int iFact = 1;
    if(ino < 0)
    {
      ino = -ino;
    }
    for(iCnt = 1 ; iCnt <= ino ; iCnt++)
    {
        iFact = iFact * iCnt ;
        printf(" %d * \t",iCnt );
    
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d" ,&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d\n",iRet);

    return EXIT_SUCCESS;
}