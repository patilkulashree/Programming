#include <iostream>
using namespace std;

class Demo
{
  public :
       int x,y;
  //Default Constructor 
  Demo()
  {
    this->x=0;
    this->y=0; 
  }
  //Parameterized Constructor
  Demo(int a,int b)
  {
    this->x=a;
    this->y=b;
  }
  //Copy Constructor
  Demo(Demo &ref)
  {
    this->x=ref.x;
    this->y=ref.y;
   }
};
int main()
{
  Demo obj1; //Default Constructor 
  Demo obj2(11,21); //Parameterized Constructor
  Demo obj3(obj2); // Copy Constructor
  
  cout<<obj1.x<< " "<<obj1.y<<endl;
  cout<<obj2.x<<" "<<obj2.y<<endl;
  cout<<obj3.x<<" "<<obj3.y<<endl;

  return 0;
}

  

 
