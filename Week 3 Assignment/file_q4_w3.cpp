#include<stdio.h>
#include<iostream>
using namespace std;
 
void pattern4(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      if((i==j) || ((i+j)==(n-1)))
      {
        cout<<"*";
      }
      else
      {
      cout<<" ";
      }
    }
    cout<<endl;
  }
}
int main()
{
  int num;
  cout<<"Enter any number: ";
  cin>>num;
  cout<<num<<"\n";
  pattern4(num);
  return 0;
}