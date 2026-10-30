#include<stdio.h>
#include<stdlib.h>
void Display(int ino)
{
   int iCnt = 0;
   for(int iCnt = 1; iCnt <=ino ; iCnt++)
   {
    printf("%d\t",iCnt);
   }
}
int main()
{
    int iValue = 0;
    printf("Enter number \n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;

}