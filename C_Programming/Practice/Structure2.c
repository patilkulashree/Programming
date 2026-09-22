#include<stdio.h>
#pragma pack(1)
struct Student
{
  char a;
  int b;
  char c;
};
int main()
{
  struct Student s;
  printf("Size of structure=%lu bytes",sizeof(s));
  return 0;
}
