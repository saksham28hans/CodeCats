#include<stdio.h>
#include<iostream>
using namespace std;
 
 bool prime(int num)
 {
  if(num ==1)
    return false;
  for(int i=2;i<=num/2;i++)
  {
    if(num%i==0)
      return false;
  }
  return true;
 }
int main()
{
  int a,b;
  bool pr;
  cout<<"Enter a range to find prime numbers: "<<endl;
  cin>>a>>b;
  cout<<"Start of range: "<<a<<endl<<"End of range: "<<b<<endl;
  if(a>b)
  {
    cout<<"Start of range should be less than end of range.";
    return 0;
  }
  else
  {
  for(int j =a;j<=b;j++)
  {
     pr = prime(j);
     if(pr)
      cout<<j<<"\t";
  }
}
  return 0;
}