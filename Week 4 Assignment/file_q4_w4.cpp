#include <bits/stdc++.h>
using namespace std;
 
pair<int,int> target(vector<int> arr,int num,int m)
{
  int s=0,e=num-1;
  while(s<=e)
  {
    if((arr[s] + arr[e]) == m)
    {
      return make_pair(s,e);
    }
    else if((arr[s] + arr[e]) > m)
      e--;
    else
      s++;
  }
  return make_pair(-1,-1);
}
int main()
{
  int num,m;
  pair<int,int> res;
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
  cout<<"Enter the target sum: ";
  cin>>m;
  cout<<m<<endl;
  res = target(arr,num,m);
  if(res.first!=-1)
  {
    cout<<"Target sum can be achieved using index: "<<endl;
    cout<<res.first<<"\t"<<res.second;
  }
  else
    cout<<"Target sum cannot be achieved.";
  return 0;
}