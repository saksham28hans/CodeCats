#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int num,m,*p,pos=0,neg=0,zer=0;
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
    if(*(p+i)==0)
      zer += 1;
    else if(*(p+i)>0)
      pos +=1;
    else
      neg +=1;
  }
  cout<<"The number of positive elements in the array are: "<<pos<<endl;
  cout<<"The number of negative elements in the array are: "<<neg<<endl;
  cout<<"The number of elements in the array having value zero are: "<<zer;
  return 0;
}