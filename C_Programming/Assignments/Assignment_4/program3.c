//Problem Statement : Accept two integers and determine which number is greater.If both numbers are equal,display appropriate message.
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst , int iSecond)
{
   if(iFirst > iSecond)
   {
    printf("Greater value is :  %d \n",iFirst);
   }
   else if(iFirst == iSecond)
   {
    printf("Both values are equal : \n");
   }
   else
   {
    printf("Greater value is : %d \n",iSecond);
   }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers : ");
    scanf("%d %d",&iValue1 ,&iValue2);

    FindGreater(iValue1,iValue2);
    return EXIT_SUCCESS;

}