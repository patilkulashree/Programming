#include<iostream>
using namespace std;
class Student
{
  public:
      int marks;
     Student(int m)
     {
        marks=m;
     }
};
int main()
{
  Student s1(80);
  Student s2(90);
 
 cout<<"S1 marks :"<<s1.marks<<endl;
 cout<<"S2 marks :"<<s2.marks<<endl;
 return 0;
}
