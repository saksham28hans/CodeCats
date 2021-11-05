#include<stdio.h>
#include<iostream>
using namespace std;
 
void pattern1(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}
int main()
{
  int num;
  cout<<"Enter any number: ";
  cin>>num;
  cout<<num<<"\n";
  pattern1(num);
  return 0;
}