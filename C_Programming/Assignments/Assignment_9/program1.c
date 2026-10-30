#include<stdio.h>
#include<stdlib.h>
void Display(int ino)
{
    if(ino < 0)
    {
        ino = -ino;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= ino ; iCnt++ )
    {
        printf("*\t",iCnt);
    }
    for(iCnt = 1 ; iCnt <= ino ; iCnt++ )
    {
        printf("#\t",iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);
    Display(iValue);

    return EXIT_SUCCESS;
}