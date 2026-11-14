#include<stdio.h>
int main()
{
  register int a = 200;
  printf("The value of a is %d\n",a);
  printf("The address of variable a is %p ",&a); // compilation error
}
