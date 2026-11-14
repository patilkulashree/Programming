#include<stdio.h>
int x = 10;
int main()
{
  extern int x;
  printf("%d",x);
  return 0;
}
