#include <iostream>
using namespace std;

class Parent
{
  public :
     virtual void show()
     {
       cout<<"Parent";
     }
};
class Child : public Parent 
{
  public :  
        void show()
        {
          cout<<"Child";
        }
};
int main()
{
 Child c ;
 Parent *p=&c;//Upcasting
 p->show();
}
