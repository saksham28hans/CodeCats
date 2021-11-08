#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
 
void reverse(vector<int> arr,int num)
{
  int s=0,e=num-1;
  while(s<=e)
  {
    swap(arr[s],arr[e]);
    s++;
    e--;
  }
  cout<<"The reverse of the array is: "<<endl;
  for(int i=0;i<num;i++)
    cout<<arr[i]<<"\t";
}
int main()
{
  int num,m;
  cout<<"Enter the number of elements in the array: ";
  cin>>num;
  cout<<num<<"\n";
  vector<int> arr(num);
  cout<<"Enter the elements of the array: "<<endl;
  for(int i=0;i<num;i++)
  {
    cin>>arr[i];
    cout<<arr[i]<<"\t";
  }
  cout<<endl<<endl;
  reverse(arr,num);
  return 0;
}