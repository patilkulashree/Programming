#include<stdio.h>
#include<stdlib.h>
void OddDisplay(int ino)
{
    int iCnt = 0;
    for(iCnt= 1 ;iCnt <ino ; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d \t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d\n",&iValue);
    OddDisplay(iValue);
    return EXIT_SUCCESS;
}