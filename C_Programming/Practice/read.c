#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
 int fd;
 char data[100];
 fd=open("Demo.txt",O_RDONLY);
 if(fd==-1)
 {
   printf("file open failed\n");
   return -1;
  }
 read(fd,data,sizeof(data));
 printf("Data read from file:%s\n",data);
 close(fd);
 return 0;
}
