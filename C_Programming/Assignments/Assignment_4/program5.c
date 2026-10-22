// Accept an integer and determine whether it is diviible by 5 without leaving any remainder 


////////////////////////////////////////////
//
//Function Name : Divisibility of 5
//Description : It is used to give divisibility of 5
//Input : Int ,Int
//Output : Int
//Author : Kulashree Pramod Patil
//Date : 22/10/2026
//
/////////////////////////////////////////// 
#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int ino)
{
    if(ino % 5 == 0)
    {
        printf("It is divisible by 5 \n");
    }
    else
    {
        printf("It is not divsible by 5 \n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number :\n");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);
    return EXIT_SUCCESS;
}