#include<stdio.h>
#include<stdlib.h>
void Display(int ptr[])
{
 printf("%d\n",*ptr);
 ptr++;
 
 printf("%d\n",*ptr);
 ptr++;

 printf("%d\n",*ptr);
 ptr++;

 printf("%d\n",*ptr);
 ptr++;
}
int main()
{
  int arr[5]={11,21,51,101,50};
  printf("%d\n",arr);
  Display(arr);

  return EXIT_SUCCESS;
}
