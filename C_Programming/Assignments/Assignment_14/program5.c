#include<stdio.h>
#include<stdlib.h>
int FactDiff(int ino)
{
    int icnt = 0,factsum = 0,nonfactsum = 0;
    for(icnt = 1 ; icnt < ino ;icnt++)
    {
        if(ino % icnt == 0)
        {
            factsum = factsum + icnt;
        }
        else
        {
            nonfactsum = nonfactsum + icnt;
        }
    }return factsum - nonfactsum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;

}