#include<stdio.h>
#include<stdlib.h>

int addition(
              int ino1,   //First Input
              int ino2  //Second Input
             )
{
 int iAns=0;
 iAns=ino1+ino2;          //Business Logic
 return iAns;
}
int main()
{
  int iValue1=0,iValue2=0,iResult=0;
  printf("Enter first number :\n");
  if(scanf("%d",&iValue1)!=1)
  {
    fprintf(stderr,"Unable to proceed as input is invalid \n ");
    return EXIT_FAILURE;
  }
  printf("Enter second number :\n");
  if(scanf("%d",&iValue2)!=1)
  {
   fprintf(stderr,"Unable to proceed as input is invalid \n");
   return EXIT_FAILURE;
  }
  iResult=addition(iValue1,iValue2);
  printf("Addition is :%d\n",iResult);
  return EXIT_SUCCESS;
}


  
  
 