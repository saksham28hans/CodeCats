#include <bits/stdc++.h>
using namespace std;
 
void swa(int *x,int*y)
{
  int c;
  *x += *y;
  cout<<*x;
  *y = *x -*y;
  *x -= *y;
}
int main()
{
  int a,b;
  cout<<"Enter the value of a: ";
  cin>>a;
  cout<<a<<"\n";
  cout<<"Enter the value of b: ";
  cin>>b;
  cout<<b<<"\n";
  swa(&a,&b);
  cout<<"After swapping"<<endl<<"a is: "<<a<<endl<<"b is: "<<b;
  return 0;
}