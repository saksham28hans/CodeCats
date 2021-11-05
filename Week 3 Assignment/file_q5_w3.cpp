#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
 
void sum_ele(vector<int> arr,int num)
{
  int sum =0,od_sum=0,ev_sum=0,od_pos_sum=0,ev_pos_sum=0;
 for(int i=0;i<num;i++)
 {
  if(arr[i] & 1==1)
    od_sum += arr[i];
  else
    ev_sum += arr[i];
  if(i&1==1)
    od_pos_sum += arr[i];
  else
    ev_pos_sum += arr[i];
  sum += arr[i];
 }
 cout<<"Sum of all elements is : "<<sum<<endl;
 cout<<"Sum of all odd elements is: "<<od_sum<<endl;
 cout<<"Sum of all even elements is: "<<ev_sum<<endl;
 cout<<"Sum of all elements in odd position is: "<<od_pos_sum<<endl;
 cout<<"Sum of all elements in even position is: "<<ev_pos_sum<<endl;
}
int main()
{
  int num;
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
  sum_ele(arr,num);
  return 0;
}