#include<iostream>
using namespace std;

class Animal
{
  public:
      virtual void Sound()=0; // pure virtual function
}; 

class Dog : public Animal
 {
    public :
          void Sound()
          {
             cout<<"Dog barks "<<endl;
          }
};
int main()
{
  Dog d;
  d.Sound();

  return 0;
}


