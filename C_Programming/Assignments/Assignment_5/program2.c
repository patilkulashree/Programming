//Problem Statement Accept a year and determine whether it is a leap year according to Gregorian calender rules.A year is a leap year if it is divisible by 400,or divisible by 4 but not by 100.Consider years less than or equal to zero invalid

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)

{
    if(iYear <= 0)
    {
        printf("Invalid Year \n");
    }
    else if(iYear % 4 == 0  && iYear % 100 != 0)
    {
        printf("The year is leap year \n");
    
    }
    else if(iYear % 400 == 0)
    {
        printf("It is a leap year \n");
    }
    else
    {
        printf("It is not a leap year \n");
    }
}
int main()
{
  int iYear = 0;
  printf("Enter Year : \n");
  scanf("%d",&iYear);

  CheckLeapYear(iYear);

  return EXIT_SUCCESS;

}
    

