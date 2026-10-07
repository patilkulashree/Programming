#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
 int fd;
 char data[]="Hello from system call";
 fd=open("Demo.txt",O_WRONLY);
 if(fd==-1)
 {
   printf("File open failed\n");
   return -1;
 }
 write(fd,data,sizeof(data) -1);
 printf("Data Written successfully\n");
 close(fd);
 return 0;
}
