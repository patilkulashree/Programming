 #include<iostream>
using namespace std;
class Arithmetic
{
  public:
      int no1;
      int no2;
  Arithmetic()
  {
    this->no1=0;
    this->no2=0;
  }
 Arithmetic(int i,int j)
 {
  this->no1=i;
  this->no2=j;
 }

  int Addition()
   {
     int Ans=0;
     Ans=this->no1 + this->no2;
     return 0;
   }
};
int main()
{
  Arithmetic aobj1(10,11);
  int Result=0;
  Result=aobj1.Addition();
  cout<<"Addition="<<Result<<"\n";
  Result=aobj1.Substraction();
  cout<<"Substraction="<<Result<<"\n";
  return 0;
}

  
  
     
