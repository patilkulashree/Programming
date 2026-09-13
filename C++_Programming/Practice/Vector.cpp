#include<iostream>
#include<vector>
using namespace std;

int main()
{
 vector<int> numbers;
 //Adding elements
 numbers.push_back(10);
 numbers.push_back(20);
 numbers.push_back(30);
 numbers.push_back(40);

 //Display elements
 cout<<"Elements :";

 for(int i : numbers )
 {
   cout<<i<<" ";
 }
 //Remove last element
 numbers.pop_back();

 cout<<\n After removing :";
 
 for(int i : numbers )
 {
    cout<<i<<"";
 }
//size
 cout<<"\nsize : "<<numbers.size();
 return 0;
}

 
 
 
 

 