#include<stdio.h>
#include<iostream>
using namespace std;
 
 int fact(int num)
 {
  if(num==1)
    return 1;
  else
    return num * fact(num-1);
 }
int main()
{
  int num, f =1;
  cout<<"Enter any number: ";
  cin>>num;
  cout<<num<<"\n";
  f =fact(num);
  cout<<endl<<"The factorial of the number "<<num<<" is: "<<f;
  return 0;
}