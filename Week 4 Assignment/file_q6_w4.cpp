#include <bits/stdc++.h>
using namespace std;
 
int search(vector<int> arr,int num,int m)
{
  int s=0,l=num,mid;
  while(s<=l)
  {
    mid = (s+l)/2;
    if(arr[mid]==m)
      return mid;
    else if(arr[mid] > m)
      l = mid-1;
    else
      s = mid+1;
  }
  if(arr[mid]>m)
    return mid;
  else 
    return mid+1; 
}
int main()
{
  int num,m,pos;
  cout<<"Enter the number of elements in the array: ";
  cin>>num;
  cout<<num<<"\n";
  vector<int> arr(num);
  cout<<"Enter the elements of the array is order: "<<endl;
  for(int i=0;i<num;i++)
  {
    cin>>arr[i];
    cout<<arr[i]<<"\t";
  }
  cout<<endl;
  cout<<"Enter the key whose position is to be found: ";
  cin>>m;
  cout<<m<<endl<<endl;
  pos = search(arr,num,m);
  cout<<"The key "<<m<<" is at position: "<<pos;
  return 0;
}