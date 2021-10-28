#include<stdio.h>
#include<iostream>
using namespace std;
 
 void arms(int num)
 {
  int n,t,sum=0;
  n =num;
  while(n>=1)
  {
    t = n%10;
    sum += (t*t*t);
    n=n/10;
  }
  if(num==sum)
    cout<<endl<<"The number "<<num<<" is a armstrong number.";
  else
    cout<<endl<<"The number "<<num<<" is not a armstrong number.";
 }
int main()
{
  int num;
  cout<<"Enter any number: ";
  cin>>num;
  cout<<num<<"\n";
  arms(num);
  return 0;
}