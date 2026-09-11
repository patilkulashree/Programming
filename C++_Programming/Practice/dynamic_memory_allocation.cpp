#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter number of elements :";
   cin>>n;
  
  int *arr=new int[n];
  cout<<"Enter "<<n<<"elements:\n"; 
  for(int i=0;i<n;i++)
  {
     cin>>arr[i];
  }
  cout<<"Elements are :\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<"";
  }
  delete[]arr;
  return 0;
}