#include <stdio.h>
#include <stdlib.h>

void Display(int arr[] , int ilength)
{
  int icnt = 0;
  printf("Elements of the array are  :\n");
  for(icnt = 0; icnt < ilength ;icnt++)
  {
    printf("%d\n",arr[icnt]);
  }
}
int main()
{
  int *ptr = NULL;
  int isize = 0 , icnt = 0;
  
  printf("Enter the number of elements you want \n");
  scanf("%d",&isize);
  
  //step 1: allocate the memory
  ptr = (int *)malloc(sizeof(int) * isize);
  if(ptr == NULL)
  {
    printf("Memory allocation failed \n");
    return EXIT_FAILURE;
  }
  
  //step 2: use the memory

  printf("Enter the elements :\n");
  for(icnt = 0;icnt < isize ; icnt++)
  {
    scanf("%d",&ptr[icnt]);
  }
  Display(ptr,isize);
  
 //step 3 : free the memory
 free(ptr);
 return EXIT_SUCCESS;
}

  