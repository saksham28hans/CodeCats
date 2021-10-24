#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
 
 void roots(int a,int b,int c)
 {
 	int d = 0;
 	float root1 = 0, root2 = 0,real_root = 0, img_root = 0;
        d = (b*b) - (4*a*c);
        if(d==0)
        {
        	root1 = (-1*b)/(2*a);
        	cout<<"There is only one root of the equation:\n"<<root1;
        }
        else if(d>0)
        {
        	root1 = ((-1*b)+(sqrt(d)))/(2*a);
        	root2 = ((-1*b)-(sqrt(d)))/(2*a);
            cout<<"The two real and distinct roots are:\n"<<root1<<'\n'<<root2;
        }
        else
        {
         real_root = (-1*b)/(2*a);
         img_root = sqrt(-1*d)/(2*a);
         root1 = real_root + img_root;
         root2 = real_root - img_root;
        cout<<"The imaginary roots of the equation are:\n"<<root1<<"\n"<<root2;
        }
 }
int main()
{
  int a,b,c;
  cout<<"Enter coefficients of the quadratic equation (a,b,c)\n";
  cin>>a>>b>>c;
  cout<<a<<"\t"<<b<<"\t"<<c<<"\n";
  roots(a,b,c);
  return 0;
}