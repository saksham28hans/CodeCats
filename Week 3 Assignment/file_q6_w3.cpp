#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
 
void occurence(vector<int> arr,int num,int m)
{
  vector<int> freq(num,0);
  for(int i=0;i<num;i++)
  {
    freq[arr[i]] +=1;
  }
  cout<<"The frequency of element "<<m<<" is: "<<freq[m];
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
  cout<<endl;
  cout<<"Enter the number whose occurence is to be found: ";
  cin>>m;
  cout<<endl;
  occurence(arr,num,m);
  return 0;
}