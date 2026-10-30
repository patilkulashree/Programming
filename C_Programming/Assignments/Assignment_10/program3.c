#include<stdio.h>
#include<stdlib.h>
int KMtoMeter(int ino)
{
    int Meter = 0;
    Meter = ino * 1000;
    return Meter;

}
int main()
{
    int iValue1 = 0, iRet = 0;
    printf("Enter Distance\n");
    scanf("%d",&iValue1);

    iRet=KMtoMeter(iValue1);
    printf("Meter is %d",iRet);
    EXIT_SUCCESS;
}