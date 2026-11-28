#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 
bool SearchElement(int Arr[],int ilength,int ino)
{
  int icnt = 0,icount = 0;
  for(icnt = 0 ; icnt < ilength ;icnt++)
  {
     if(Arr[icnt] == ino)
     {
        icount++;
     }
  }
  if(icount == 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}
int main()
{
  int *ptr = NULL;
  int isize = 0,icnt = 0,iret = 0,ivalue = 0; 
  bool bret = false;

  printf("Enter number of element \n");
  scanf("%d",&isize);

  //step 1: allocate the memory

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

  printf("Enter the number that you want to search\n");
  scanf("%d",&ivalue);

  bret = SearchElement(ptr,isize,ivalue);

  if(bret == true)
  {
    printf("it is there");
  }
  else
  {
     printf("it is not there");
  }
  free(ptr);
  return EXIT_SUCCESS;

}
  