#include<stdio.h>
#include<stdlib.h>
int CountFrequency(int Arr[],int ilength)
{
  int icnt = 0,icount = 0;
  for(icnt = 0, icnt < ilength ; icnt++)
  {
    if(Arr[icnt] == 11)
    {
      icount++;
    }
  }
  return icount;
}
int main()
{
  int *ptr = NULL;
  int isize = 0,icnt = 0,iret = 0;
  
  printf("Enter number of elements :\n");
  scanf("%d",&isize);
  
  ptr = (int *)malloc(isize * sizeof(int));
  if(NULL == ptr)
  {
    printf("Error : Unable to allocate memory\n");
    return EXIT_FAILURE;
  }
  printf("Enter the elements :\n");
  for(icnt = 0 ; icnt < isize ; icnt++)
  {
    scanf("%d",&ptr[icnt]);
  }
  iret = CountFrequency(ptr,isize);
  printf("Number of occurrence of element is : %d\n",iret);
  free(ptr);

  return EXIT_SUCCESS;
}

  
