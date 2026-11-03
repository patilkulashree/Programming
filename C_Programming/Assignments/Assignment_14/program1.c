#include<stdio.h>
#include<stdlib.h>

int MultFact(int ino)
{ 
    int icnt = 0;
    int ifact = 1;

    for(icnt = 1 ; icnt < ino ; icnt++)
    {
        if(ino % icnt == 0)
        {
            ifact = ifact * icnt;
        }     
    } return ifact;               
}

int main()

{
    int iValue = 0 ; int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("%d",iRet);

    return 0;
} 
