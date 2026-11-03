#include<stdio.h>
#include<stdlib.h>

int CountOdd(int ino)
{
  int idigit = 0;
  int oddcount = 0;
  if(ino < 0)
  {
    ino = -ino;
  }
  while(ino != 0)
  {
    idigit = ino % 10;
    if(idigit % 2 != 0)
    {
        oddcount++;
    }
    ino = ino / 10;
  }return oddcount;
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}