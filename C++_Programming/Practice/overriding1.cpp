#include<iostream>
using namespace std;

class Base
{
    public:
       int i,j;
       void fun()   //1000
       {
        cout<<"Base fun\n"<<endl;
       }

       void gun()                 //2000
       {
        cout<<"Base gun\n"<<endl;
       }

     virtual  void sun()                 //3000
       {
        cout<<"Base sun\n"<<endl;
       }

     virtual void run()                     //4000
       {
        cout<<"Base run\n"<<endl;
       }

};

class Derived : public Base
 {
    public:
    int x;
    void fun()                    //5000
    {
        cout<<"Derived fun \n"<<endl;
    }
    void sun()                    //6000
    {
        cout<<"Derived sun\n"<<endl;
    }
    virtual void mun()            //7000
    {
      cout<<"Derived mun\n"<<endl;
    }
    void bun()                    //8000
    {
        cout<<"Derived bun\n"<<endl;
    }
};

int main()
{
    Base *bp=new Derived();

        bp->fun();
        bp->gun();
        bp->sun();
        bp->run();
        //bp->mun();//error
        //bp->bun(); //error

}