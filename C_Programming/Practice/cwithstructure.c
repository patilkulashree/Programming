#include<stdio.h>
struct Student
{
  int rollno;
  char name[20];
  float marks;
};
int main()
{
 struct Student s1;
 s1.rollno=101;
 s1.marks=95.0;
 printf("Enter name : \n ");
 scanf("%s",s1.name);
 printf("name :%s \n",s1.name);


 printf("Enter rollno : \n");
 scanf("%d",&s1.rollno);
 printf("rollno :%d \n",s1.rollno);
 
 printf("marks are : \n");
 scanf("%f",&s1.marks);
 printf("marks are %f : \n",s1.marks);
 return 0;
}

 
   