#include <bits/stdc++.h>
using namespace std;

void parser(string str)
{
cout<<"The parsed string is: "<<endl;
for(int i=0;i<str.size();i++)
{
	if(str[i] == 'G')
		cout<<str[i];
	else if(str[i] == '(')
	{
		if(str[i+1] == ')')
		{
			cout<<"o";
			i +=1;
		}
		else if(str[i+1] == 'a')
		{
			cout<<"al";
			i += 3;
		}
	}
}
}

int main()
{
	string str;
	cout<<"Enter a string: ";
	cin>>str;
	cout<<str<<endl;
	parser(str);
	return 0;
}