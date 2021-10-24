#include<stdio.h>
#include<iostream>
using namespace std;
 
 void Identify_char(char a)
 {
 	 if((a >=65 and a<=90) or (a >=97 and a<=122))
 	  cout<<"The character entered is a Alphabet";
 	else if(a>=48 and a<=57)
 	  cout<<"The character entered is a Digit";	
 	else 
 	  cout<<"The character entered is a Special character";	
 }
int main()
{
  char a;
  cout<<"Enter any character\n";
  cin>>a;
  cout<<a<<"\n";
  Identify_char(a);
  return 0;
}