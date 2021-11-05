#include<stdio.h>
#include<iostream>
using namespace std;
 
void pattern3(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=i;j<=n;j++)
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
  pattern3(num);
  return 0;
}