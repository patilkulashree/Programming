#include<iostream>
using namespace std;
int main()
{
 int *ptr = NULL;
 int isize = 0,icnt = 0;
 
 cout<<"Enter number of elements :\n";
 cin>>isize;

 //step 1 :allocate the memory
  ptr = new int[isize];

 //step 2:use the memory
 cout<<"Enter the elements :\n";
 for(icnt = 0;icnt < isize ;icnt++)
 {
  cin>>ptr[icnt];
 }
 cout<<"Elements of the array are :\n";
 for(icnt = 0;icnt < isize ;icnt++)
 {
   cout<<ptr[icnt]<<endl;
 }
 //step3 :delete the memory
 delete[] ptr;

 return EXIT_SUCCESS;
}
