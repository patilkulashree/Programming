#include<iostream>
using namespace std;
class Base
{
  public :
       int i,j;
       void fun()
       {
         cout<<"Base fun \n"<<endl;
       }
       void gun()
       {
         cout<<"Base gun\n"<<endl;
       }
       virtual void sun()
       {
         cout<<"Base sun \n"<<endl;
       }
       virtual void run()
       {
         cout<<"Base run\n"<<endl;
       }
};
class Derived : public Base
{
   public :
           int x ;
           void fun()
           {
             cout<<"Derived fun\n"<<endl;
           }
           void sun()
           {
             cout<<"Derived sun \n"<<endl;
           }
           virtual void mun()
           {
             cout<<"Derived mun\n"<<endl;
           }
           void bun()
           {
             cout<<"Derived bun\n"<<endl;
           }
};  
int main()
{
  Base *bp = new Derived();
        bp->fun();
        bp->gun();
        bp->sun();
        bp->run();
}
