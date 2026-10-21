// Write a program which accept one number from user and print that number of even numbers on screen

//Input : 7
//Output : 2 4 6 8 10 12 14 

#include<stdio.h>

void PrintEven(int ino)
{
    int iCnt = 0;
    int iEven = 2;
    if(ino <= 0)
    {
        return ;
    }
    for(iCnt = 1;iCnt <= ino; iCnt++)
    {
        printf("%d  \n ",iEven);
        iEven = iEven + 2;
    }

}
int main()9
{
    int ivalue=0;
    printf("Enter number \n");
    scanf("%d ",&ivalue);

    PrintEven(ivalue);
    return 0;
}