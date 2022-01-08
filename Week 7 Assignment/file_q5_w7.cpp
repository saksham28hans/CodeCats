#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	//cin>>m;

	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}


	int a = 0,b=n-1;
	while(a<b)
	{
		for(int i=0;i<(b-a);i++)
		{
			swap(arr[a][a+i],arr[a+i][b]);
			swap(arr[a][a+i],arr[b][b-i]);
			swap(arr[a][a+i],arr[b-i][a]);
		}
		++a;
		--b;
	}

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
	}
	return 0;
}