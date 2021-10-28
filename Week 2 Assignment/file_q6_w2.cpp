#include<stdio.h>
#include<iostream>
using namespace std;
 
 int power(int a,int b)
 {
  int p = 1;
  for(int i =1;i<=b;i++)
  {
    p *= a;
  }
  return p;
 }
int main()
{
  int a,b,p;
  cout<<"Enter any two numbers: "<<endl;
  cin>>a>>b;
  cout<<"Base: "<<a<<endl<<"Power: "<<b<<endl;
  p = power(a,b);
  cout<<"Power "<<b<<" of Base "<<a<<" is: "<<p;
  return 0;
}