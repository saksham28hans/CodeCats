#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	cin>>m;

	int arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;
}