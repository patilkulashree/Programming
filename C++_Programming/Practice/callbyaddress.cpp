#include<iostream>
using namespace std;
void changeValue(int *x)
{
  *x=100;
   cout<<"Inside function :"<< *x <<endl;
}
int main()
{
 int a =10;
 cout<<"Before function call :"<< a <<endl;
 changeValue(&a);
 cout<<"After function call:"<< a <<endl;
 }
