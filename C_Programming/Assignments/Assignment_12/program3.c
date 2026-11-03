#include<stdio.h>
int CountTwo(int ino)
{
  int iDigit = 0 , Count = 0;
  while(ino != 0)
  {
    iDigit = ino % 10;
    if(iDigit == 2)
    {
        Count++;
    }
    ino = ino / 10;
  }return Count;
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = CountTwo(iValue);
    printf("%d",bRet);
    return 0;
    
}