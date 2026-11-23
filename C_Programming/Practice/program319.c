#include<stdio.h>
#include<stdlib.h>

void Display(int arr[] ,int ilength)
{
  int icnt = 0;
  for(icnt = 0;icnt < ilength ; icnt++)
  {
    printf("%d\n",arr[icnt]);
  }
}
int main()
{
  int brr[7] ={11,21,51,101,111,121,151};
  Display(brr,7);
  
  return EXIT_SUCCESS;
}
