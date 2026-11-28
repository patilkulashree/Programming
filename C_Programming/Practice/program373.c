#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool SearchElement(int Arr[],int ilength,int ino)
{
  int icnt = 0;
  bool bflag = false;
  for(icnt = ilength - 1;icnt >= 0;icnt --)
  {
     if(Arr[icnt] == ino)
     {
       bflag = true;
       break;//Early Exit;
      }
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
 
   ptr =(int *)malloc(isize * sizeof(int));
   if(NULL == ptr)
   {
     printf("Error : Unable to allocate the memory \n");
     return EXIT_FAILURE;
   }
   printf("Enter the elements :\n");
   for(icnt= 0;icnt < isize ;icnt++)
   {
     scanf("%d",&ptr[icnt]);
   }
   printf("Enter the number that you want to search");
   scanf("%d",&ivalue);

   bret = SearchElement(ptr,isize,ivalue);
   if(bret == true)
   {
      printf("Element is there\n");
   }
   else
   {
     printf("Element is not there \n");
   }
   free(ptr);
   return EXIT_SUCCESS;
}
