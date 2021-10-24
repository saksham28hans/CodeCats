#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
 
 void percent(int a,int b,int c,int d, int e)
 {
 	float per;
  per = (float(a+b+c+d+e)/500)*100;
  if(per>=90)
  {
    cout<<"Grade A";
  }
  else if(per>=80)
  {
     cout<<"Grade B";
  }
  else if(per>=70)
  {
     cout<<"Grade C";
  }
  else if(per>=60)
  {
     cout<<"Grade D";
  }
  else if(per>=40)
  {
     cout<<"Grade E";
  }
  else
  {
    cout<<"Grade F";
  }
 }
int main()
{
  int a,b,c,d,e;
  cout<<"Enter the marks of five subjects(Physics/Chemistry/Biology/Mathematics/Computer)\n";
  cin>>a>>b>>c>>d>>e;
  cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<"\t"<<e<<"\n";
  percent(a,b,c,d,e);
  return 0;
}