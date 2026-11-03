#include<iostream>
using namespace std;
                
template <class T>
class Arithmatic
{
   public: T no1;
           T no2;

           Arithmatic(T a ,T b);
           T addition();           
           T substraction();
};
    template <class T>
    Arithmatic <T> :: Arithmatic(T a ,T b) //error
    {
        no1 = a;
        no2 = b;
    }
    template <class T>
    T Arithmatic <T> :: addition()   //error
     {
        T ans;
        ans = no1 + no2;
        return ans;
    }

    template <class T>
    T Arithmatic <T>  :: substraction() //error
    {
        T ans;
        ans = no1 - no2;
        return ans;
    } 
int main()
{ 
  Arithmatic <int> *aobj =  new Arithmatic <int> (11,10);

  cout<<aobj->addition()<<endl;
  delete aobj;
  
  return EXIT_SUCCESS;
}
