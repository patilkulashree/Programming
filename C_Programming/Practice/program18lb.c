#include<stdio.h>
#include<stdlib.h>
void CheckEven(int ino)
{
  if(ino % 2==0)
  {
   printf("it is even number \n");
  }
  else
  {
   printf("it is a odd number \n");
  }
}
int main()
{
  int iValue=0;
  printf("Enter number : \n");
  scanf("%d",&iValue);
  CheckEven(iValue);
  return EXIT_SUCCESS;
}



