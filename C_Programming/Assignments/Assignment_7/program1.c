#include<stdio.h>
#include<stdlib.h>
void Pattern(int ino)
{
   int iCnt=0;
   for(iCnt = 1 ; iCnt <= ino ; iCnt++)
   {
     printf("$  *\t");
   } 

}
int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}      