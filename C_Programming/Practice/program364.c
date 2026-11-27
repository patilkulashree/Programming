#include<stdio.h>
#include<stdlib.h>

void EvenOddCount(int Arr[],int ilength)
{
  int icnt = 0,icounteven = 0,icountodd = 0;
  for(icnt = 0;icnt < ilength ; icnt++)
  {
    if(Arr[icnt] % 2 == 1)
    {
      icountodd++;
    }
    else
    {
      icounteven++;
    }
   }printf("Number of even elements : %d,odd elements %d\n",icounteven,icountodd);
}
int main()
{
  int *ptr = NULL;
  int isize = 0,icnt = 0;

  printf("Enter number of elements :\n");
  scanf("%d",&isize);

  ptr = (int *)malloc(isize * sizeof(int));
  if(NULL == ptr)
  {
    printf("Error : Unable to allocate memory :\n");
    return EXIT_FAILURE;
  }

  printf("Enter the elements :\n");

  for(icnt = 0;icnt < isize ; icnt++)
  {
    scanf("%d",&ptr[icnt]);
  }

  EvenOddCount(ptr,isize);

  printf("Number of elements are :%d\n");
  free(ptr);

  return EXIT_SUCCESS;
}
  