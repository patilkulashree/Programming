#include<iostream>
using namespace std;
int main()
{
  int a=10;
  int b=0;
  
  try{
     if(b==0)
       throw b;
     cout<<a/b;
     }
  catch(int e)
     {
       cout<<"cannot divide by zero \n";
    }
   return 0;
}
