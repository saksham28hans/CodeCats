#include<stdio.h>
#include<iostream>
using namespace std;
 
 int notes(int amount)
 {
 	int tot = 0, n = amount;
 	 if((amount/500) >= 1)
 	 {
 	 	tot += (amount/500);
 	 	n = amount%500;
 	 	tot = tot + notes(n);
 	 }
 	 else if((amount/100) >= 1)
 	 {
 	 	tot += (amount/100);
 	 	n = amount%100;
 	 	tot = tot + notes(n);
 	 }
 	 else if((amount/50) >= 1)
 	 {
 	 	tot += (amount/50);
 	 	n = amount%50;
 	 	tot = tot + notes(n);
 	 }
 	 else if((amount/20) >= 1)
 	 {
 	 	tot += (amount/20);
 	 	n = amount%20;
 	 	tot = tot + notes(n);
 	 }
 	 else if((amount/10) >= 1)
 	 {
 	 	tot += (amount/10);
 	 	n = amount%10;
 	 	tot = tot + notes(n);
 	 }
 	 else if((amount/5) >= 1)
 	 {
 	 	tot += (amount/5);
 	 	n = amount%5;
 	 	tot = tot + notes(n);
 	 }
 	 else if((amount/2) >= 1)
 	 {
 	 	tot += (amount/2);
 	 	n = amount%2;
 	 	tot = tot + notes(n);
 	 }
 	 else if((amount/1) >= 1)
 	 {
 	 	tot += (amount/1);
 	 	n = amount%1;
 	 	tot = tot + notes(n);
 	 }
 	 return tot;
 }
int main()
{
  int amount,total =0;
  cout<<"Enter any amount\n";
  cin>>amount;
  cout<<amount<<"\n";
  total = notes(amount);
  cout<<total;
  return 0;
}