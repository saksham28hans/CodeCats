#include <bits/stdc++.h>
using namespace std;

char missing_char(string str1, string str2)
{
	int sum_of_large = 0, sum_of_small = 0,i;
	char miss_char;
	string small_str,large_str;
	if(str1.size()>str2.size())
		{
			small_str = str2;
			large_str = str1;
		}
	else
		{
			small_str = str1;
			large_str = str2;
		}
	for(i=0;i<small_str.size();i++)
	{
		sum_of_small += small_str[i];
		sum_of_large += large_str[i];
	}
	sum_of_large += large_str[i];
	miss_char = sum_of_large - sum_of_small;
	return miss_char;
} 
int main()
{
	char miss_char;
	string str1;
	string str2;
	cout<<"Enter 2 strings: "<<endl;
	cin>>str1>>str2;
	cout<<str1<<endl<<str2<<endl;
	miss_char = missing_char(str1,str2);
	cout<<"Missing character is: "<<miss_char;
	return 0;
}