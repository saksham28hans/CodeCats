#include <bits/stdc++.h>
using namespace std;
 
void rev(int *p,int num)
{
 int s=0l=num-1;
 while(s<=l)
 {
  swap(*(p+s),*(p+l));
    s++;
    l--;
 }
} 
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
  rev(p,num);
  cout<<"The reverse of the array is: "<<endl;
  for(int i=0;i<num;i++)
  {
    cout<<arr[i]<<"\t";
  } 
  return 0;
}