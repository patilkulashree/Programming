//Accept one number from user and print that number of * on screen.

#include<stdio.h>
#include<stdlib.h>

void Accept(int ino)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= ino; iCnt++)
    {
        printf("%d * \n",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number \n");
    scanf("%d",&iValue);

    Accept(iValue);
    
    return EXIT_SUCCESS ;
}