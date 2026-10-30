#include<stdio.h>
#pragma pack(1)
int main()
{
int a=10,b=20;
int *const ptr=&a;
*ptr=20;
printf("The changed value of pointed object a is %d",*ptr);
ptr=&b;
*ptr=10;
printf("The changed value of pointed object b is %d",*ptr);
 return 0;
}

