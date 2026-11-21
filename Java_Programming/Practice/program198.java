/*
   Input  : 4
   Output : A  B  C  D

*/

void Pattern(int ino)
{
  for(icnt = 'A';icnt <= ino ;icnt++)
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

