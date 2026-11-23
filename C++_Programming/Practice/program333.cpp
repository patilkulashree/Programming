#include<iostream>
using namespace std;
int main()
{
  int *ptr = NULL;
  int isize = 0;
  cout<<"Enter number of elements :\n";
  cin>>isize;

  //step 1: allocate the memory
  ptr = new int[isize];
 
  //step 2:use the memory

  //step 3 : delete the memory
  delete ptr;

  return EXIT_SUCCESS;
 }
