//callbyreference

#include <iostream>
using namespace std;

void fun(int &x)
{ 
  x=x+10;
}
int main()
{
 int i =10;
 fun(i);
 cout<<i;
}

