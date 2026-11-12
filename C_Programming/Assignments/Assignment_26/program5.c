#include<stdio.h>
#include<stdlib.h>
void Display(char ch)
{
    char chi = '\0';

    printf("Decimal    %d\n",ch);
    printf("Hexadecimal %0X%x\n",ch);
    printf("Octal %04o\n",ch);

}
int main()
{
    char cValue = '\0';

    printf("Enter the character\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
