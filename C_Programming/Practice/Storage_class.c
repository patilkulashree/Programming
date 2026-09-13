#include<stdio.h>
int x =10; //global variable

void demo()
{
  auto int a=1;
  static int b=1;
  register int c=1;
 
  printf("auto =%d\n",a);
  printf("static=%d\n",b);
  printf("register=%d\n",c);

  a++;
  b++;
  c++;
}
int main()
{
 demo();
 demo();
 printf("extern =%d\n",x);

 return 0;
}

