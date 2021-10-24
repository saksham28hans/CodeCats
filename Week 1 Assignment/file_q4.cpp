#include<stdio.h>
#include<iostream>
using namespace std;
 
 bool isLeap(int year)
 {
 	 if(year%4 == 0 || ((year % 4 == 0) and (year%100 != 0)))
 	  return true;
 	else
 	  return false;
 }
int main()
{
  int a;
  cout<<"Enter any year\n";
  cin>>a;
  cout<<a<<"\n";
   if (isLeap(a))
   cout<< "Year "<<a<<" is a leap year.";
   else
   	cout<< "Year "<<a<<" is not a leap year.";
  return 0;
}