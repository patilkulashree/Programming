#include <iostream>

using namespace std;

class PPA                                                                                                                                                                                                                                                                         
{
  public: 
        int no1;
        int no2;
PPA()
{
   cout<<"Inside Default Constructor\n";
}
PPA(int a,int b)
{
 cout<<"Inside Parameterized Constructor\n";
}
PPA(PPA &obj)
{
 cout<<"Inside copy constructor \n";
}
~PPA()
{
 cout<<"Inside Destructor \n";
}

};
int main()
{
 PPA pobj1; //Default Constructor
 PPA pobj2(11,21);
 PPA pobj3(pobj1);
 
 return 0;
}
