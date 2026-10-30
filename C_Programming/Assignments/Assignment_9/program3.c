#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int ino)
{
   int iFact = 1;
   int iCnt = 0;
   for(iCnt = 2;iCnt <= ino ;iCnt++)
   {
    if(iCnt % 2 == 0)
     {
       iFact = iFact * iCnt;
     }
   }
   return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Even Factorial of number is %d",iRet);

    return EXIT_SUCCESS;
}
