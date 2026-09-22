#include <iostream>
using namespace std;
void fun( int *p)
{
  *p=*p + 10;
}
int main()
{
 int i =10;
 fun(&i);
 cout<<i;
}
