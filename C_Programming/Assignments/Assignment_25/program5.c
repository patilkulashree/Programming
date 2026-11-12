#include<stdio.h>
#include<stdlib.h>
#define FALSE 0;
typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM");
    }
    
    else if(chDiv == 'B' || chDiv =='b')
    {
        printf("Your exam at 8:30 AM");
    }
    
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9:20 AM");
    }
    
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10:30 AM");
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}