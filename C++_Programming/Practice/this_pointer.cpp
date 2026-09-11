#include<iostream>
using namespace std;
class Student
{
  int rollno;
  public :
    void setRollNo(int rollNo)
    {
      this->rollno=rollNo;
    }
    void display()
    {
      cout<<"Roll No:"<<this->rollno<<endl;
    }
};
int main()
{  
   Student s1;
   s1.setRollNo(10);
   s1.display();
   return 0;
}

   
  