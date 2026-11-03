#include<stdio.h>
#include<stdlib.h>

int MultDigits(int ino)
{
  int imult = 1;
  int idigit = 0;
  if(ino < 0)
  {
    ino = -ino;
  }
  while(ino != 0)
  {
    idigit = ino % 10 ;
    if(idigit != 0)
    {
    imult = imult * idigit ;
    }
    ino = ino / 10;
  }return imult;
}
int main()
{
    int iValue = 0 ;
    int iRet = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}