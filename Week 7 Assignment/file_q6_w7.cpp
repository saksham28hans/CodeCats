#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,s,r;
	cin>>n;
	cin>>m;
    cin>>s>>r;	

	int arr[n][m];
	int num;
	//vector<vector<int>> arr(n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
		cin>>arr[i][j];
		}
	}

	vector<int> shell_store;
	for(int j = s-1; j<=m-s;j++)
		shell_store.push_back(arr[s-1][j]);
	for(int i =s;i<=n-s;i++)
		shell_store.push_back(arr[i][m-s]);
	for(int j=m-s-1;j>=s-1;j--)
		shell_store.push_back(arr[n-s][j]);
	for(int i = n-s-1;i>=s;i--)
		shell_store.push_back(arr[i][s-1]);

	int sz = shell_store.size();
	vector<int> rot(sz);
	for(int i=0;i<sz;i++)
	{
      if((i+r) >=sz)
      {
      	rot[(i+r)%sz] = shell_store[i];
      }
      else
      	rot[i+r] = shell_store[i];
	}

    int k=0;
	for(int j = s-1; j<=m-s;j++)
		arr[s-1][j] = rot[k++];
	for(int i =s;i<=n-s;i++)
	    arr[i][m-s] = rot[k++];
	for(int j=m-s-1;j>=s-1;j--)
		arr[n-s][j] = rot[k++];
	for(int i = n-s-1;i>=s;i--)
		arr[i][s-1] = rot[k++];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j]<<"\t";
		}
	}
   
	return 0;
}