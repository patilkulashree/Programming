#include<stdio.h>

    void Pattern(int irow,int icol)
    {
      for(int i = 1,ch = 'A';i <= irow ;i++,ch++)
      {
        for(int j = 1;j <= icol;j++)
        {
            printf("%c\t",ch);
        }printf("\n");
      }printf("\n");
    }
int main()
{
    int ivalue1 = 0,ivalue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d%d",&ivalue1,&ivalue2);

    Pattern(ivalue1,ivalue2);
    return 0;
}