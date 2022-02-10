#include <bits/stdc++.h>
using namespace std;

int pow_l(int x, int n)
{
	long long int pw;
	if(n==1)
	return x;
	else
	{
	pw = pow_l(x,n/2); 
	if((n&1) == 0)
    	return pw*pw;
    else
    	return pw*pw*x;
    }
}
int main()
{
    int x,n;
    long long int res;
    cin>>x>>n;
    res = pow_l(x,n/2);
    if((n&1) == 0)
    	cout<<res*res;
    else
    	cout<<res*res*x;
	return 0;
}