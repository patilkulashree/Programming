#include<iostream>
using namespace std;
class Parent
{
  public:
       virtual void show()
       {
         cout<<"Parent class show()"<<endl;
       }
};
class Child : public Parent
{
  public:
      void show()
      {
         cout<<"Child class show()"<<endl; 
      }
};
int main()
{
  Parent *p;
  Child c;
  p=&c;
  p->show();
  return 0;
}
