#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
 
void order(vector<int> arr,int num)
{
  int lar,lar2,sm,sm2;
 lar = lar2=arr[0];
 sm = sm2=arr[0];
 for(int i=1;i<num;i++)
 {
  if(arr[i]>lar)
  {
    lar2 = lar;
    lar=arr[i];
  }
  if(arr[i]<sm)
  {
    sm2 = sm;
    sm=arr[i];
  }
 }
  cout<<"The largest element in the array is: "<<lar<<endl;
  cout<<"The second largest element in the array is: "<<lar2<<endl;
  cout<<"The smallest element in the array is: "<<sm<<endl;
  cout<<"The second smallest element in the array is: "<<sm2;
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