#include<stdio.h>
#include<stdlib.h>

int CountRange(int ino)
{
  int idigit = 0;
  int icount = 0;
  if(ino < 0)
  {
    ino = -ino;
  }
  while(ino != 0)
  {
    idigit = ino % 10;
    if(idigit > 3 && idigit < 7)
    {
        icount++;
    }
    ino = ino / 10;
  }return icount;
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}