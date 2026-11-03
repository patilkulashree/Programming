#include<stdio.h>
#include<stdlib.h>

int CountEven(int ino)
{
  int idigit = 0;
  int evencount = 0;
  if(ino < 0)
  {
    ino = -ino;
  }
  while(ino != 0)
  {
    idigit = ino % 10;
    if(idigit % 2 == 0)
    {
        evencount++;
    }
    ino = ino / 10;
  }return evencount;
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}