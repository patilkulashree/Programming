#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    if(ino == 1)
    {
        printf("One");
    }
    else if(ino == 2)
    {
        printf("Two");
    }
    else if(ino == 3)
    {
        printf("Three");
    }
    else if(ino == 4)
    {
        printf("Four");
    }
    else if(ino == 5)
    {
        printf("Five");
    }
    else if(ino == 6)
    {
        printf("Six");
    }
    else if(ino == 7)
    {
        printf("Seven");
    }
    else if(ino == 8)
    {
        printf("Eight");
    }
    else if(ino == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid Number \n")
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);
    return EXIT_SUCCESS;
}