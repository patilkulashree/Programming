#include<stdio.h>
#include<stdlib.h>

int CountDiff(int ino)
{
    int idigit = 0 , esum = 0 , osum = 0;
    while(ino != 0)
    {
       idigit = ino % 10 ;
       if(idigit % 2 == 0)
        {
            esum = esum + idigit ;
        }
        else
        { 
            osum = osum + idigit;
        }
        ino = ino / 10;
    }return esum - osum;
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return EXIT_SUCCESS;
}
  