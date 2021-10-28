#include<stdio.h>
#include<iostream>
using namespace std;
 
 void rev(int num)
 {
  int n,t,sum=0;
  while(n>=1)
  {
    t=t%10;
    sum = (sum*10) + t;
    n=n/10;
  }
  cout<<"The reverse of the number "<<num<<" is: "<<sum;
 }
int main()
{
  int num;
  cout<<"Enter any number: ";
  cin>>num;
  cout<<num<<"\n";
  rev(num);
  return 0;
}