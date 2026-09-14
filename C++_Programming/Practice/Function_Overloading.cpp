#include<iostream>
using namespace std;

class Calculator
{
  public :
   void add(int a ,int b)
   {
       cout<< " Sum ="  << a+b <<endl;
   }
   void add(int a ,int b,int c)
   { 
      cout<< " Sum ="  << a+b+c <<endl;
   }
   void add(double a,double b)
   {
     cout<<" Sum ="<< a+b <<endl;
   }
};
int main()
{
Calculator obj;
obj.add(10,20);
obj.add(10,20,30);
obj.add(10.8,39.9);

return 0;
}

