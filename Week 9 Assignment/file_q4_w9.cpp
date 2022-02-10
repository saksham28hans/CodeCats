#include <bits/stdc++.h>
using namespace std;

int pow1(int x, int n)
{
	if(n==1)
	return x;
	else
	return (x* (pow1(x,n-1)));
}
int main()
{
    int x,n;
    long long int res;
    cin>>x>>n;
    res = pow1(x,n);
    cout<<res;
	return 0;
}