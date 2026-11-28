#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool SearchElement(int Arr[],int ilength,int ino)
{
  int icnt = 0;
  bool bflag = false;
  icnt = 0;
  while(icnt  < ilength )
  {
    if(Arr[icnt] == ino)
    {
      bflag = true;
      break;         //Early Exit;
    }icnt++;
  }
  return bflag;
}
int main()
{
   int *ptr = NULL;
   int isize = 0,icnt = 0,iret = 0,ivalue = 0;
   bool bret = false;
 
   printf("Enter number of elements \n");
   scanf("%d",&isize);

   ptr = (int *)malloc(isize * sizeof(int));
   if(NULL == ptr)
   {
     printf("Error : Unable to allocate the memory :\n");
     return EXIT_FAILURE;
   }

   printf("Enter the elements :\n");
   for(icnt = 0;icnt < isize ;icnt++)
   {
     scanf("%d",&ptr[icnt]);
   }
   printf("Enter the number of element that you want to search :\n");
   scanf("%d",&ivalue);

   bret = SearchElement(ptr,isize,ivalue);
   if(bret == true)
   {
     printf("It is present :\n");
   }
   else
   {
    printf("It is not a present :\n");
   }
   free(ptr);
   return EXIT_SUCCESS;
}
