#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[100];
	int c=0;
	cout<<"Enter a string: ";
	cin.getline(str,100);
	cout<<str<<endl;
	char *p;
	p=str;
	while(*p != '\0')
	{
		c++;
		p++;
	}
	cout<<"The lenght of the string is: "<<c;
	return 0;
}