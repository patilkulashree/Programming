//Problem Statement :Accept three integers and determine the greatest number among them..The program mush also work correctly when two or three numbers are equal

#include<stdio.h>
#include<stdlib.h>

void FindGreatest(int iFirst , int iSecond ,int iThird)
{
    if(iFirst > iSecond && iFirst > iThird)
    {
        printf("The greater number is :%d ",iFirst);
    }
    
    else if(iSecond > iFirst && iSecond > iThird)
    {
        printf("The greater number is :%d ",iSecond);
    }

    else if(iThird > iFirst && iThird > iSecond)
    {
        printf("The greater number is :%d ",iThird);
    }

    else if(iFirst == iSecond && iSecond == iThird && iThird == iFirst)
    {
        printf("The greater number is : %d",iThird);
    }
    
}
int main()
{
    int iValue1 = 0,iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers :");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1,iValue2,iValue3);

    return EXIT_SUCCESS;

}