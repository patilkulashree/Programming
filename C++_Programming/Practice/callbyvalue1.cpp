#include<iostream>
using namespace std;

void fun(int x)
{
  x=x+10;
  cout<<"Inside function :"<<x<<endl;
}
int main()
{
 int i=10;
 fun(i);
 cout<<"Inside main :"<<i<<endl;
 }

 