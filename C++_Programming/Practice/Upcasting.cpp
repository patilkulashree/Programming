#include<iostream>
using namespace std;
class Parent 
{
  public:
      void show()
       {
         cout<<"Parent";
       }
};
class Child:public Parent 
{
  public :
      void display()
       {
        cout<<"Child";
       }
};

int main()
{
  Child c;
  Parent *p=&c; //upcasting
  p->show();
  return 0;
}

 