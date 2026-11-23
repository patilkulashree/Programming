#include<iostream>
using namespace std;

int Summation(int arr[],int ilength)
{
  int icnt = 0;
  int isum = 0;
  for(icnt = 0;icnt < ilength;icnt++)
  {
    isum = isum + arr[icnt];
  }return isum;
}
float Average(int arr[],int ilength)
{
  int icnt = 0;
  int isum = 0;
  for(icnt = 0;icnt < ilength ;icnt++)
  {
    isum = isum + arr[icnt];
  }return ((float)isum/(float)ilength);
}
int main()
{
  int *ptr = NULL;
  int isize = 0,icnt = 0;
  int iret = 0;
  float fret = 0.0f;

 cout<<"Enter number of elements :\n";
 cin>>isize;
 
 //step 1:allocate the memory

 ptr = new int[isize];

//step 2 :use the memory

cout<<"Enter the elements :\n";

for(icnt = 0;icnt < isize;icnt++)
{
  cin>>ptr[icnt];
}
cout<<"Elements of the array are :\n";

for(icnt = 0;icnt <isize;icnt++)
{
   cout<<ptr[icnt]<<endl;
}
iret = Summation(ptr,isize);
cout<<"Addition is :"<<iret<<endl;

fret = Average(ptr,isize);
cout<<"Average is :"<<fret<<endl;

//step 3 :delete the memory
delete[] ptr;

return EXIT_SUCCESS;
}



