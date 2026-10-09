#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int ino)
{
  if(ino % 2==0)
  {
   return true;
  }
  else
  {
   return false;
  }
}
int main()
{
 int iValue=0;      //setting by-default values
 bool bRet=false;   //setting by-default values
 
 printf("Enter number :\n");
 scanf("%d",&iValue);

 bRet=CheckEven(iValue);
 if(bRet==true)
 {
   printf("it is even\n");
 }
 else
 {
   printf("it is odd\n");
 }
 return EXIT_SUCCESS;
}

 