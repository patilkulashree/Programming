#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void StrRevX(char *str)
{
   int i = 0;
   int j = strlen(str)-1;
   char temp;
   while(i < j)
   {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
   }
}
int main()
{
    char arr[20];
    printf("Enter String\n");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);
    printf("Modified string is %s",arr);

    return EXIT_SUCCESS;
}