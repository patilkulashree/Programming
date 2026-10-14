#include<stdio.h>
#include<fcntl.h>
#include<unistd.h> 
int main()
{
  int fd;
  fd=creat("demo1.txt",0644);
  if(fd==-1)
  {
    printf("File creation failed\n");
    return 1;
  }
  printf("File created successfully\n");
  close(fd);
  return 0;
}


