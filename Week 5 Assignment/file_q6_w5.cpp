#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int num,m,*p,sum_odd=0,sum_even=0;
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
    if(*(p+i) & 1==1)
      sum_odd += *(p+i);
    else
      sum_even += *(p+i);
  }
  cout<<"The sum of odd elements in the array is: "<<sum_odd<<endl;
  cout<<"The sum of even elements in the array is: "<<sum_even;
  return 0;
}