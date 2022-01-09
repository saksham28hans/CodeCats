#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,search;
	cin>>n;
    cin>>search;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		cin>>arr[i][j];
		}
	}
	
	int i = 0,j=n-1;
	while((i>=0 && i<n) && (j>=0 && j<n))
	{
       if(arr[i][j] == search)
       {
       	cout<<i<<"\t"<<j;
        break;
       }
       else if(arr[i][j] < search)
       {
       	i = i+1;
       }
       else
       	j = j-1;
	}
	return 0;
}