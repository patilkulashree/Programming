#include<stdio.h>
#include<stdlib.h>

void displaydigits(int ino)
{
  int idigit = 0;
  while( ino != 0)
  {
    idigit = ino % 10;
    ino = ino / 10;
    printf("%d\n",idigit);
  }
}
int main()
{
  displaydigits(9752);
  return EXIT_SUCCESS;
}
