#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int num,m,*p,sum=0;
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
  for(int i=0;i<num;i++)
  {
    sum += *(p+i);
  }
  cout<<"The sum of the elements of the array is: "<<endl;
  cout<<sum;
  return 0;
}