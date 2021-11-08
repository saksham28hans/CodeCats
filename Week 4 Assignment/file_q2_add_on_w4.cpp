#include <bits/stdc++.h>
#include <limits.h>
using namespace std;
 
//cont int N = INT_MAX; 
void search(vector<int> arr,int num,int k)
{
  vector<bool> freq(INT_MAX,false);
  for(int i=0;i<num;i++)
  {
    if(freq[arr[i]] == false)
    freq[arr[i]] = true;
  }
 if(freq[k] == true)
  cout<<"The element "<<k<<" is present.";
 else
  cout<<"The element "<<k<<" is not present.";
}
int main()
{
  int num,m,k;
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
  cout<<"Enter the element you want to search: ";
  cin>>k;
  cout<<k<<endl;
  search(arr,num,k);
  return 0;
}