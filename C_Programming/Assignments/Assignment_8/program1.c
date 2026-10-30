#include<stdio.h>
#include<stdlib.h>


void Number(int ino)
{
    if(ino < 50)
    {
        printf("Small");
    }
    else if(ino > 50 && ino <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    Number(iValue);
    return EXIT_SUCCESS;
}