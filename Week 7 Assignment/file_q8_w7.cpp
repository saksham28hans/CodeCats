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

	for(int i=0;i<n;i++)
	{
		int lj = 0;
		for(int j=0;j<n;j++)
		{
			if(arr[i][j] < arr[i][lj])
				lj = i;
		}
        bool flag1 =true;
		for(int k=0;k<n;k++)
		{
			if(arr[k][lj] > arr[i][lj])
			{
				flag1 = false;
				break;
			}
		}
		if(flag1==true)
		{
			cout<<arr[i][lj];
			return 0;
		}
	}
	cout<<"Invalid Input";
	return 0;
}