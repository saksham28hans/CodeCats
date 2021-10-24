#include<stdio.h>
#include<iostream>
using namespace std;
 
 int max2(int a,int b)
 {
 	 if(a>=b)
 	  return a;
 	else
 	  return b;
 }
int main()
{
  int a,b,c;
  cout<<"Enter any two numbers\n";
  cin>>a;
  cin>>b;
  cout<<a<<"\n";
  cout<<b<<"\n";
  c = max2(a,b);
  cout<< "The greatest number between the two is: "<<c;
  return 0;
}