#include<iostream>
using namespace std;
class Student{
 public :
     int rollno; //non static 
     static int count;
   
     void display()
     {
       cout<<"Roll No:"<<rollno<<endl;
       cout<<"Count :"<<count<<endl;
      }
};
int Student::count=0;

int main()
{
  Student s1,s2;
  s1.rollno=10;
  s2.rollno=20;
  
 Student::count=2;
 
 s1.display();
 s2.display();

 return 0;
}
