#include<stdio.h>
union Student
{
 int rollno;
 char name[20];
 float marks;
};
int main()
{
 union Student s;
 s.rollno=100;

 printf("Rollno :%d\n",s.rollno);

 s.marks=85.78;
 printf("marks : %.2f\n",s.marks);

 return 0;
}
