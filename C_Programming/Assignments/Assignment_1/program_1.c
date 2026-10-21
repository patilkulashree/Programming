//Program to divide two numbers
#include<stdio.h>
#include<stdlib.h>
float Divide(float ino1,float ino2)
{
    float ians = 0;
    if(ino2 == 0)
    {
        return -1;
    }
    ians =ino1/ino2;
    return ians;
}
int main()
{
    float ivalue1 = 15 , ivalue2 = 5;
    float iRet = 0;

    iRet=Divide(ivalue1 , ivalue2);
    printf("Division is %f ",iRet);
    return 0;
}