#include<stdio.h>
#include<stdlib.h>

int Count(int ino)
{
   int idigit = 0 , iCount = 0;
   if(ino < 0)
   {
    ino = -ino;
   }
   while(ino != 0)
   {
     idigit = ino % 10;
     if(idigit <  6)
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
    
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}