#include<iostream>
#include<stdlib.h>
using namespace std;

int CountX(char *str)
{
  int iCount = 0;

  while(*str != '\0')
  {
     if(*str =='a')
     {
       iCount++;
     }
     str++;
  }
    return iCount;
}
int main()
{
  char arr[100] = {'\0'};
  int iret = 0;
  
  cout<<"Enter string : "<< endl;
  cin.getline(arr,100);

  iret = CountX(arr);

  cout<<"Frequency of a is : " << iret << endl;
  return EXIT_SUCCESS;
}