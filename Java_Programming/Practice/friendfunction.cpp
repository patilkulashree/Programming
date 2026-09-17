#include<iostream>
using namespace std;
class Student
{
  private:
      int marks;
  public:
       Student()
       {
          marks=90;
       }
       freind void display(Student s);
  };
  void display(Student s)
  {
    cout<<"Marks ="<<s.marks<<endl;
  }
 int main()
 {
   Student obj;
   display(obj);
   return 0;
 }
