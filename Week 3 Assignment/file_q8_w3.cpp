#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
  int n,m,t,g,k=0,cnt=0,q,inl,res;
  cout<<"Enter the number of test cases: ";
  cin>>t;
  cout<<t<<endl<<endl;
  for(int i=1;i<=t;i++)
  {
    cout<<"Enter the number of games for test case "<<i<<": ";
    cin>>g;
    cout<<g<<endl;
    for(int j=1;j<=g;j++)
    {
      cnt +=1;
      cout<<"Enter the value of I,N and Q for game "<<g<<": ";
      cin>>inl>>n>>q;
      cout<<inl<<"\t"<<n<<"\t"<<q<<endl;
      if(inl==q)
        res = n/2;
      else
      {
        if(n&1==1)
          res = (n/2) + 1;
        else
          res = n/2;
      }
      cout<<"The number of occurences in game "<<j<<" is: "<<res<<endl;
    }
    cout<<endl<<endl;
  }
  return 0;
}