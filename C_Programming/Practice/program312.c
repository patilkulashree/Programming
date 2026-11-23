#include<stdio.h>
#include<stdlib.h>
void Display(int *ptr)
{
 printf("%d\n",ptr[0]);
 printf("%d\n",ptr[1]);
 printf("%d\n",ptr[2]);
 printf("%d\n",ptr[3]);
}
int main()
{
  int arr[5]={11,21,51,101,50};
  printf("%d\n",arr);
  Display(arr);

  return EXIT_SUCCESS;
}
