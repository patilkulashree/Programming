#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int ino)
{

   int EFact = 1,OFact = 1;
   int iCnt = 0;
   for(iCnt = 2;iCnt <= ino ;iCnt++)
   {
     if(iCnt % 2 == 0)
     {
       EFact = EFact * iCnt;
     }
   }

   for(iCnt = 2;iCnt <= ino ;iCnt++)
   {
     if(iCnt % 2 != 0)
     {
       OFact = OFact * iCnt;
     }
   }
   return EFact - OFact;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);
    
    return EXIT_SUCCESS;
}