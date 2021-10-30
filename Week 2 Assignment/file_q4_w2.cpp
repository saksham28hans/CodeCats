#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
 
 bool prime(int num)
 {
  int a = sqrt(num);
  if(num ==1)
    return false;
  for(int i=2;i<=a;i++)
  {
    if(num%i==0)
      return false;
  }
  return true;
 }
int main()
{
  int num;
  bool pr;
  cout<<"Enter any number: ";
  cin>>num;
  cout<<num<<"\n";
  pr = prime(num);
  if(pr)
  cout<<endl<<"The number "<<num<<" is a prime number.";
  else
  cout<<endl<<"The number "<<num<<" is not a prime number.";
  return 0;
}