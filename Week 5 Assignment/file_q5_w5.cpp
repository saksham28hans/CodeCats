#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int num,m,*p,max,min;
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
  max=*p;
  min=*p;
  for(int i=1;i<num;i++)
  {
    if(*(p+i)>max)
      max = *(p+i);
    if(*(p+i)<min)
      min = *(p+i);
  }
  cout<<"The maximum element in the array is: "<<max<<endl;
  cout<<"The minimum element in the array is: "<<min;
  return 0;
}