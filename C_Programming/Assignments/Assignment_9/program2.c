#include<stdio.h>
#include<stdlib.h>
int DollarToINR(int ino)
{
    int iCnt = 0,iRet;
    for(iCnt = 1; iCnt <= ino ;iCnt++)
    {
        iRet = ino * 70;
    }
    return iRet;

}
int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value in INR is %d",iRet);

    return EXIT_SUCCESS;

  return EXIT_SUCCESS;
}