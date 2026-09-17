#include<stdio.h>
void changeValue(int x)
{
  x=100;
  printf("Inside Function :%d\n",x);
}
int main()
{
 int a=10;
 printf("Before function call:%d\n",a);
 changeValue(a);
 printf("After function call: %d\n",a);
 return 0;
}

 
 