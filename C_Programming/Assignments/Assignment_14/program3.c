#include<stdio.h>
#include<stdlib.h>

int NonFact(int ino)
{ 
    int icnt = 0;
    int ifact = 1;

    for(icnt = ino-1 ; icnt >1 ; icnt--)
    {
        if(ino % icnt != 0)
        {
            printf("%d\t",icnt);
        }     
    }return ifact;               
}

int main()

{
    int iValue = 0 ; int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = NonFact(iValue);
    printf("%d",iRet);

    return 0;
} 
