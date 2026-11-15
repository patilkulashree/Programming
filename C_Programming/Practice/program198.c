/*
   Input  : 4
   Output : A  B  C  D

*/
#include<stdio.h>
#include<stdlib.h>

void Pattern(int ino)
{
  int icnt = 0;
  for(icnt = 65;icnt < 65 + ino ;icnt++)
  {
    printf("%c\t",icnt);
  }
}
int main()
{
  int ivalue = 0;

  printf("Enter number \n");
  scanf("%d",&ivalue);
  
  Pattern(ivalue);
  return EXIT_SUCCESS;
}

