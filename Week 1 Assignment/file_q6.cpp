#include<stdio.h>
#include<iostream>
using namespace std;
 
 void Week_day(int day)
 {
 	 
 	 switch (day)
 	 {
 	 	case 1:
 	 	cout<<"The day is Monday";
 	 	break;
 	 	case 2:
 	 	cout<<"The day is Tuesday";
 	 	break;
 	 	case 3:
 	 	cout<<"The day is Wednesday";
 	 	break;
 	 	case 4:
 	 	cout<<"The day is Thursday";
 	 	break;
 	 	case 5:
 	 	cout<<"The day is Friday";
 	 	break;
 	 	case 6:
 	 	cout<<"The day is Saturday";
 	 	break;
 	 	case 7:
 	 	cout<<"The day is Sunday";
 	 	break;
 	 	default:
 	 	cout<<"Please enter a number between 1-7";
 	 	 	 }
 }
int main()
{
  int day;
  cout<<"Enter any number between 1-7\n";
  cin>>day;
  cout<<day<<"\n";
  Week_day(day);
  return 0;
}