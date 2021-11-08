#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
 
void frequency(vector<int> arr,int num)
{
  vector<int> freq(num,0);
  for(int i=0;i<num;i++)
  {
    freq[arr[i]] +=1;
  }
  for(int j=0;j<num;j++)
  {
    if(freq[j]!=0)
  cout<<"The frequency of element "<<j<<" is: "<<freq[j]<<endl;
  }
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
  cout<<endl<<endl;
  frequency(arr,num);
  return 0;
}