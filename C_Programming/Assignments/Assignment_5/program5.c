#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
  if(cValue >= 'a' && cValue <='z')
  {
    printf("it is lowercase alphabet");
  }
  
  else if(cValue >= 'A' && cValue <='Z')
  {
    printf("it is uppercase alphabet");
  }
  
  else if(cValue >= '0' && cValue <= '9')
  {
    printf("it is a digit" );
  }
  else
  {
    printf("it is a special character");
  }
}
int main()
{
    char cValue = '\0';
    printf("Enter a character :");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
