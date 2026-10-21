//Accept on character from user and check whether that character is vowell (a,e,i,o,u) or not
#include<stdbool.h>
#include<stdio.h>


typedef int BOOL;
#define TRUE 1 
#define FALSE 0

 bool ChkVowel(char CValue)
{
    if(CValue == 'a' || CValue == 'A' ||
       CValue == 'o' || CValue == 'O' ||
       CValue == 'u' || CValue == 'U' )
       {
        return TRUE;
       }
       else
       {
        return FALSE;
       }
}
int main()
{
    char CValue='\0';
    BOOL bRet = FALSE;

    printf("Enter character \n");
    scanf("%c",&CValue);

    if(bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel ");
    }
    return 0;
}