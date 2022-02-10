#include <bits/stdc++.h>
using namespace std;

void pr_inc(int n)
{
	if(n == 1)
	cout<<n<<endl;
    else
    {
	pr_inc(n-1);
    cout<<n<<endl;  
	}
}
int main()
{
    int n;
    cin>>n;
    pr_inc(n);
	return 0;
}