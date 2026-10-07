#include <stdio.h>
#include <unistd.h>
int main()
{
 int result;
 result=unlink("Demo.txt");
 if(result==0)
 {
    printf("file deleted sucessfully\n");
 }
 else
 {
    printf("file deletion failed \n");
 } 
    return 0;
}
