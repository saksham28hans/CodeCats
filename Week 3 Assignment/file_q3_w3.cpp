#include<stdio.h>
#include<iostream>
using namespace std;
 
void pattern3(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
      cout<<" ";
    }
    for(int k=1;k<=(2*i -1);k++)
    {
      cout<<"*";
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
  pattern3(num);
  return 0;
}