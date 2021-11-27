#include <bits/stdc++.h>
using namespace std;

bool duck(string num)
{
int count=0;
for(int i=0;i<num.size();i++)
{
	if(num[i] != '0' && count ==0)
		count++;
	if(num[i]=='0' && count>0)
		return true;
}
return false;
}

int main()
{
	bool dck;
	string num;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<num<<endl;
	dck = duck(num);
	if(dck)
	cout<<"Number "<<num<<" is a duck number.";
    else
    cout<<"Number "<<num<<" is not a duck number.";
	return 0;
}