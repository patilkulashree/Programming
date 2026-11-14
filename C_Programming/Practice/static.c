#include<stdio.h>
void fun()
{
  static int x = 5;
  x++;
  printf("%d",x);
}
int main()
{
  fun();
  fun();
  fun();
  return 0;
}
