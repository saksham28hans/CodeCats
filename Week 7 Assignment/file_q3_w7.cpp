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
	
 int j=0;
	while(j<=m-1)
	{
		
		for(int i=0;i<n;i++)
			cout<<arr[i][j]<<"\t";
		j++;
		if(j<=m-1)
		{
		for(int i=n-1; i>=0;i--)
			cout<<arr[i][j]<<"\t";
		j++;
	    }
	}
	return 0;
}