#include<stdio.h>
#include<iostream>
using namespace std;
 
 void sum_no(int num)
 {
  int sum=0,odd_sum = 0,even_sum = 0;
 	cout<<"The first "<<num<<" natural numbers are:"<<endl;
  for(int i=1;i<=num;i++)
  {
   cout<<i<<"\t";
   if(i&1==1)
    odd_sum +=i;
   else
    even_sum += i;
  }
  sum = ((num)*(num+1))/2;
  cout<<endl<<"The Sum of Natural Numbers upto "<<num<<" terms are: "<<sum;
  cout<<endl<<"The Sum of Odd Natural Numbers upto "<<num<<" terms are: "<<odd_sum;
  cout<<endl<<"The Sum of Even Natural Numbers upto "<<num<<" terms are: "<<even_sum;
 }
int main()
{
  int num;
  cout<<"Enter any number: ";
  cin>>num;
  cout<<num<<"\n";
  sum_no(num);
  return 0;
}