#include<stdio.h>
#include<stdlib.h>

int CountFour(int ino)
{
    int iDigit = 0;
    int iCount = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    while(ino != 0)
    {
        iDigit = ino % 10;
        if(iDigit == 4)
        {
            iCount++;
        }
        ino = ino / 10;

    }return iCount;

}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}