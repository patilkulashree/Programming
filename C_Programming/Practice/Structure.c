#include<stdio.h>
struct Student{
     int rollno;
     char name[20];
     float marks;
     };
int main()
{
   struct Student s;
   
   printf("Enter roll no");
   scanf("%d",&s.rollno);
   printf("Enter name :");
   scanf("%s",s.name);
   printf("Enter marks :");
   scanf("%f",&s.marks );

   printf("\n Student Details :\n");
   printf("Rol No :%d\n",s.rollno);
   printf("Name :%s\n",s.name);
   printf("Marks :%2f\n",s.marks);

   return 0;
}


   