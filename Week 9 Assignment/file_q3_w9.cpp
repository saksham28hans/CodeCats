#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
	if(n==1)
	return 1;
	else
	return (n * fact(n-1));
}
int main()
{
    int n;
    long long int m;
    cin>>n;
    m = fact(n);
    cout<<m;
	return 0;
}