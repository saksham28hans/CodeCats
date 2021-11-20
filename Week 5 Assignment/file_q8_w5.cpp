#include <bits/stdc++.h>
using namespace std;
 
void swap_f(int *p,int *q,int num)
{
  for(int i=0;i<num;i++)
  {
    *(p+i) = *(p+i) + *(q+i);
    *(q+i) = *(p+i) - *(q+i);
    *(p+i) = *(p+i) - *(q+i);
  }
} 
int main()
{
  int num,m,*p,*q;
  cout<<"Enter the number of elements in the array: ";
  cin>>num;
  cout<<num<<"\n";
  int arr[100],brr[100];
  cout<<"Enter the elements of 1st array: "<<endl;
  for(int i=0;i<num;i++)
  {
    cin>>arr[i];
    cout<<arr[i]<<"\t";
  }
  cout<<endl;
  cout<<"Enter the elements of 2nd array: "<<endl;
  for(int i=0;i<num;i++)
  {
    cin>>brr[i];
    cout<<brr[i]<<"\t";
  }
  cout<<endl;
  p=arr;
  q=brr;
  swap_f(p,q,num);
  cout<<"Elements of 1st array after swapping are: "<<endl;
  for(int i=0;i<num;i++)
  {
    cout<<arr[i]<<"\t";
  }
  cout<<endl;
  cout<<"Elements of 2nd array after swapping are: "<<endl;
  for(int i=0;i<num;i++)
  {
    cout<<brr[i]<<"\t";
  } 
  return 0;
}