#include <bits/stdc++.h>
using namespace std;

void long_sub_seq(string str,int k)
{
vector<int> count(255);
for(int i=0;i<str.size();i++)
{
	count[str[i]] += 1;
}
cout<<"The longest sequence having atleast "<<k<<" frequency is: "<<endl;
for(int i=0;i<str.size();i++)
{
	if(count[str[i]] >=k)
		cout<<str[i];
}
}

int main()
{
	string str;
	int k;
	cout<<"Enter a string: ";
	cin>>str;
	cout<<str<<endl;
	cout<<"Enter a integer: ";
	cin>>k;
	cout<<k<<endl;
	long_sub_seq(str,k);
	return 0;
}