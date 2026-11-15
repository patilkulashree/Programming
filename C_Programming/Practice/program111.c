#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int ino)
{
  int iCnt = 0;
  
  for( iCnt = 2; iCnt <= ino/2 ; iCnt++)
  {
    if( ino % iCnt == 0)
    {
      return false;
    }
  }return true;
}
int main(void)
{
  int ivalue = 0; 
  bool bret = false;
  
  printf("Enter number \n");
  scanf("%d",&ivalue);

  bret = CheckPrime(ivalue);
  if(bret == true)
  {
    printf("it is a prime number \n");
  }
  else
  {
    printf("it is not a prime number \n");
  }
  return EXIT_SUCCESS;
}
