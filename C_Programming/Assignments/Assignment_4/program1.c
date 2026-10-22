//Problem Statement : Write a C program that accepts an integer from the user and determines whether the entered number is positive , negative or zero
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int ino)
{
   if(ino > 0)
   {
      printf("The number is positive \n");
   }
   else if(ino < 0)
   { 
      printf("The number is negative \n");
   }
   else
   {
     printf("The number is zero\n");
   }

}
int main()
{
    int iValue = 0;
    printf("Enter a number \n");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}