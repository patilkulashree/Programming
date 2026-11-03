#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int ino)
{
    while(ino != 0)
    {
        int iDigit = 0;
        iDigit = ino % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        ino = ino / 10;  
    }
    return FALSE;

}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
                                   
    printf("Enter Number \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }
    return 0;
}