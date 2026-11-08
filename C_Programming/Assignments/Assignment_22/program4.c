/*

#   1   *   #   2   *    #  3   *   #   4   *   #   5   *

*/
#include<stdio.h>
void Pattern(int ino)
{
    for(int i = 1 ; i <= ino ; i++)
    {
        printf("#\t%d\t*\t",i);
    }
}
int main()
{
    int ivalue1 = 0;
    printf("Enter number of elements :\n");
    scanf("%d",&ivalue1);

    Pattern(ivalue1);
    return 0;
}