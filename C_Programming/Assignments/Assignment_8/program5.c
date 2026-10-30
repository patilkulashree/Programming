#include<stdio.h>
#include<stdlib.h>

void Table(int ino)
{
    int iCnt = 0;
    if(ino < 0)
    {
        ino = -ino ;
    }
    for(iCnt = 10 ; iCnt >= 1 ; iCnt--)
    {
        printf("%d \t",iCnt * ino);
    }

}
int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    Table(iValue);
    return 0;
}