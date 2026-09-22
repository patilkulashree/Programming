#include<iostream>
using namespace std;

class Demo
{
  public:
    void add(int a,int b)
    {
     cout<<a+b<<endl;
     }
     void add(int a,int b,int c)
     {
       cout<<a+b+c<<endl;
     }
 };
int main()
{
 Demo obj;
 obj.add(10,20);
 obj.add(30,40,50);
 return 0;
}
