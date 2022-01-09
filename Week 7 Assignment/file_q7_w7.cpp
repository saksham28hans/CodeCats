#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	

	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		cin>>arr[i][j];
		}
	}

	int diff = 0;
	while(diff < n)
	{
	for(int i=0;i<n-diff;i++)
	cout<<arr[i][i+diff]<<"\t";
    diff++;
	}
	return 0;
}