//Problem statement : Accept an integer from the user and determine whether it is even or odd.
//An even number is completely divisible by 2

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd( int ino)
{
    if(ino % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("It is odd \n");
    }

}
int main()
{
   int iValue = 0;

   printf("Enter a number :");
   scanf("%d",&iValue);

   CheckEvenOdd(iValue);

   return EXIT_SUCCESS;


}