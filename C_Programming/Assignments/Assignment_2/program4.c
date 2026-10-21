//Accept two numbers from user and display first number in second number of times

//Input : 12 5
//Output : 12 12 12 12 12

//Input : -2,-3
// Output : -2 -2 -2 

//Input : 21 -3
//Output : 21 21 21 

#include<stdio.h>
void Display (int ino,int Frequency)
{
    int icnt = 0;

    for(int icnt =1 ; icnt <= Frequency ; icnt++)
    {
        printf("%d",ino);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    printf("Enter frequency \n");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;

}