#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int num,m,j=0;
  pair<int,int> res;
  cout<<"Enter the number of elements in the array: ";
  cin>>num;
  cout<<num<<"\n";
  vector<int> arr(num);
  vector<int> fre(3,0);

  cout<<"Enter the elements of the array(0,1,2): "<<endl;
  for(int i=0;i<num;i++)
  {
    cin>>arr[i];
    fre[arr[i]]++;
    cout<<arr[i]<<"\t";
  }
  cout<<endl;
  for(int i=0;i<3;i++)
  {
   while(fre[i]--)
   {
    arr[j++] = i;
   }
  }
  cout<<"The sorted array is: "<<endl;
  for(int k=0;k<num;k++)
  {
    cout<<arr[k]<<"\t";
  }
  return 0;
}