#include<stdio.h>
#include<stdlib.h>

int main()
{

 int *ptr = NULL;
 int isize = 0,icnt = 0;
 
 printf("Enter number of elements \n");
 scanf("%d",&isize);

 ptr = (int *)malloc(isize * sizeof(int));
 if(ptr = NULL) //Issue
 {
   printf("Error : Unable to allocate the memory :\n");
   return EXIT_FAILURE;
 }
 printf("Enter the elements :\n");
 for(icnt = 0;icnt < isize ; icnt++);
 {
    scanf("%d",&ptr[icnt]);
 }
 free(ptr);

 return EXIT_SUCCESS;
}


 