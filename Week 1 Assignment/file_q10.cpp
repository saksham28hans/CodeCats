#include<stdio.h>
#include<iostream>
using namespace std;
 
 void gross_sal(int salary)
 {
 	float gr_sal;
  if(salary<=10000)
  {
    gr_sal = salary + (0.2*salary) + (0.8*salary);
    cout<<"The gross salary of the employee is:\n"<<gr_sal;
  }
  else if((salary>=10001) and (salary<20000))
  {
    gr_sal = salary + (0.25*salary) + (0.9*salary);
    cout<<"The gross salary of the employee is:\n"<<gr_sal;
  }
  else
  {
    gr_sal = salary + (0.3*salary) + (0.95*salary);
    cout<<"The gross salary of the employee is:\n"<<gr_sal;
  }
 }
int main()
{
  int salary;
  cout<<"Enter the basic salary of the employee\n";
  cin>>salary;
  cout<<salary<<"\n";
  gross_sal(salary);
  return 0;
}