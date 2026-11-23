#include<stdio.h>
#include<stdlib.h>
void Display(int ptr[])
{
 int icnt = 0;
 for(icnt = 0;icnt < 5;icnt++)
 {
  printf("%d\n",ptr[icnt]);
 }
}
int main()
{
 int arr[7]={11,21,51,101,111,151};
 Display(arr);
 return EXIT_SUCCESS;
}
