#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
 
void order(vector<int> arr,int num)
{
  bool flag1=false;
  for(int i=0;i<num-1;i++)
  {
    flag1 = false;
    for(int j=0;j<num-i-1;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap(arr[j],arr[j+1]);
        flag1 = true;
      }
    }
    if(!flag1)
      break;
  }
  cout<<"The largest element in the array is: "<<arr[num-1];
  cout<<"The second largest element in the array is: "<<arr[num-2];
  cout<<"The smallest element in the array is: "<<arr[0];
  cout<<"The second smallest element in the array is: "<<arr[1];
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
  order(arr,num);
  return 0;
}