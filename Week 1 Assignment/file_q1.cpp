#include<stdio.h>
#include<iostream>
using namespace std;
 
 bool Even(int n)
 {
 	 if(n&1==1)
 	  return false;
 	else
 	  return true;
 }
int main()
{
  int n;
  bool k;
  cout<<"Enter any number\n";
  cin>>n;

  cout<<n;
  cout<<"\n";
  k = Even(n);
  if(k)
  	cout<< "The number is Even";
  else
  	cout<< "The number is Odd";
  return 0;
}