#include<stdio.h>
#include<fcntl.h> //it is needed header for create 
#include<unistd.h> //it is needed header for file-related system-calls 
int main()
{ 
 int fd;
 fd=creat("Demo.txt",0644);
 if(fd==-1)
 {
   printf("File creation failed\n");
 }
 else
 {
   printf("File created successfully\n");
   printf("File Descriptor = %d\n",fd);
 }
  return 0;
}
		