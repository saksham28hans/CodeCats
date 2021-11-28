#include <bits/stdc++.h>
using namespace std;

bool word_equi(string str1,string str2,int k)
{
vector<int> count_str1(255);
vector<int> count_str2(255);
for(int i=0;i<str1.size();i++)
{
	count_str1[str1[i]] += 1;
	count_str2[str2[i]] += 1;
}
for(int i=0;i<str1.size();i++)
{
	if(abs(count_str1[str1[i]] - count_str2[str1[i]]) > k )
		return false;
	if(abs(count_str1[str2[i]] - count_str2[str2[i]]) > k )
		return false;
}
return true;
}

int main()
{
	string str1, str2;
	int k;
	bool equi;
	cout<<"Enter string 1: ";
	cin>>str1;
	cout<<str1<<endl;
	cout<<"Enter string 2: ";
	cin>>str2;
	cout<<str2<<endl;
	cout<<"Enter a integer: ";
	cin>>k;
	cout<<k<<endl;
	equi = word_equi(str1,str2,k);
	if(equi)
	{
		cout<<"Both string are almost equivalent.";
	}
	else
		cout<<"Both string are not equivalent.";
	return 0;
}