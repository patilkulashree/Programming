#include<stdio.h>
#include<stdlib.h>
int CountChar(char *str,char ch)
{
    int i = 0 , ifrequency = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            ifrequency++;
        }i++;
    }return ifrequency;
   
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String\n");
    scanf("%[^'\n']s",arr);
    printf("Enter the character\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);
    printf("Character frequency is %d",iRet);

    return 0;
}