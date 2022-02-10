#include <bits/stdc++.h>
using namespace std;

void pr_dec(int n)
{
	if(n == 1)
	cout<<n;
    else
    {
    cout<<n<<endl;	
	pr_dec(n-1);
	}
}
int main()
{
    int n;
    cin>>n;
    pr_dec(n);
	return 0;
}