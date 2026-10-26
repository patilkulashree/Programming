// *    *    *     *     *
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


void Pattern(int ino)
{
        int icnt = 0;
        for(icnt=1 ; icnt<=ino ; icnt++)
        {
            printf("%d\t",icnt);
        }
        printf("\n");
}

int main()
  {  
        int ivalue=0;
        printf("Enter the frequency :\n");
        scanf("%d",&ivalue);

        Pattern(ivalue);
        return  EXIT_SUCCESS;                     
  }

