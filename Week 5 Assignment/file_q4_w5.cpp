#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int num,m,*p;
  cout<<"Enter the number of elements in the array: ";
  cin>>num;
  cout<<num<<"\n";
  int arr[100];
  cout<<"Enter the elements of the array: "<<endl;
  for(int i=0;i<num;i++)
  {
    cin>>arr[i];
    cout<<arr[i]<<"\t";
  }
  cout<<endl;
  p=arr;
  cout<<"The elements of the array are: "<<endl;
  for(int i=0;i<num;i++)
  {
    cout<<*(p+i)<<"\t";
  }
  return 0;
}