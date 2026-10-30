#include<stdio.h>
#include<stdlib.h>
void MultipleDisplay(int ino)
{
  int iCnt= 0;
  for(iCnt = 1; iCnt <= 5  ; iCnt++)
  {  
     printf("%d \t", ino * iCnt);
  }

  }
 int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return EXIT_SUCCESS;
}