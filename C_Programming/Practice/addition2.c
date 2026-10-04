#include<stdio.h>
int addition(int iNo1,int iNo2)
 {
    int iAns=0;
    iAns=iNo1+iNo2;  //Business Logic 
    return iAns;
 }
 int main()
 {
    int iValue1=0,iValue2=0,iResult=0;
    
    printf("Enter First number:\n");
    scanf("%d",&iValue1);

    printf("Enter Second number:\n");
    scanf("%d",&iValue2);


    iResult = addition(iValue1,iValue2);  
    printf("Addition is:%d\n",iResult);
 }