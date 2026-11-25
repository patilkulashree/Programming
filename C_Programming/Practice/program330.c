#include<stdio.h>
#include<stdlib.h>

int Summation(int arr[],int ilength)
{
  int icnt = 0;
  int isum = 0;
  for(icnt = 0;icnt < ilength ;icnt++)
  {
    isum = isum + arr[icnt];
  }return isum;
}
float Average(int arr[],int ilength)
{
  int icnt = 0;
  int isum = 0;
  for(icnt = 0;icnt < ilength ; icnt++)
  {
    isum = isum + arr[icnt];
  }return((float)isum/(float)ilength);
}
int main()
{
 int *ptr = NULL;
 int isize = 0,icnt = 0;
 int iret = 0;
 float fret = 0.0f;
 
 printf("Enter number of elements you want \n");
 scanf("%d",&isize);
 
 //step 1 : alloacate the memory
  ptr = (int *)malloc(sizeof(int) * isize);

 //step 2: use the memory 
printf("Enter the elements : \n");
for(icnt = 0 ;icnt < isize ;icnt++)
{
 scanf("%d",&ptr[icnt]);
}
iret = Summation(ptr,isize);
printf("Addition of all elements :%d\n",iret);
fret = Average(ptr,isize);
printf("Average of all elements :%f\n",fret);

//step 3 : free the memory
free(ptr);

return EXIT_SUCCESS;
}




