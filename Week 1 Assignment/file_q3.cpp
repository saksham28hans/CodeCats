#include<stdio.h>
#include<iostream>
using namespace std;
 
 int max3(int a,int b,int c)
 {
 	 if(a>=b and a>=c)
 	  return a;
 	else if(b>=a and b>=c)
 	  return b;
 	else
 	  return c;
 }
int main()
{
  int a,b,c,d;
  cout<<"Enter any three numbers\n";
  cin>>a>>b>>c;
  cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
  d = max3(a,b,c);
  cout<< "The greatest number amongst the three is: "<<d;
  return 0;
}