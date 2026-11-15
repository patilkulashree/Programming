/*
   Input : 4
   Output : 4 3 2 1 0
*/
#include<iostream>
#include<stdlib.h>
using namespace std;


void Pattern(int ino)
{
  int iCnt = 0;
  for(iCnt = ino ; iCnt >= 0 ; iCnt--)
  {
    printf("%d\t",iCnt);
  }
}
int main()
{
  int ivalue = 0;
  cout << "Enter the value"<<endl;
  cin >> ivalue ;
  Pattern(ivalue);
  return EXIT_SUCCESS;
 }

