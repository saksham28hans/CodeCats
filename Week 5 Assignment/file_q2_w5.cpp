#include <bits/stdc++.h>
using namespace std;
 

int main()
{
  int a,*f,p=1;
  cout<<"Enter a number: ";
  cin>>a;
  cout<<a<<"\n";
  f=&p;
  for(int i=1;i<=a;i++)
    *f = (*f) * i;
  cout<<"Factorial of a number is : "<<p;
  return 0;
}