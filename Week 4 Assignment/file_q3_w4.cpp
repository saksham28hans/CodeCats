#include <bits/stdc++.h>
using namespace std;
 
void rotate(vector<int> arr,int num,int m)
{
  vector<int> brr(num);
  for(int i=0;i<num;i++)
  {
    if((i+m)<num)
    {
      brr[i+m] = arr[i];
    }
    else
    {
      brr[(i+m)%num] = arr[i];
    }
  }
  cout<<"The array after "<<m<<" rotations is: "<<endl<<endl;
  for(int i=0;i<num;i++)
    cout<<brr[i]<<"\t";
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
  cout<<"Enter the number of times you want to rotate the array: ";
  cin>>m;
  cout<<m<<endl<<endl;
  rotate(arr,num,m);
  return 0;
}