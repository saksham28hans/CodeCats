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
   int i=0,j=0;
   char dir = 'R';
	while((i<n && i>=0) && (j<m && j>=0))
	{
		if(arr[i][j] == 0)
		{
			if(dir == 'R')
		        j=j+1;
		    else if(dir == 'D')
		    	i=i+1;
		    else if(dir == 'L')
		    	j=j-1;
		    else
		    	i=i-1;

		 }
		 else
		 {
		    if(dir == 'R')
		       {
                i=i+1;
                dir = 'D';
		       } 
		    else if(dir == 'D')
		    	{
		    		j=j-1;
		    		dir = 'L';
		    	}
		    else if(dir == 'L')
		    {
		    	i=i-1;
		    	dir = 'U';
		    }
		    else
		    {
		    	j=j+1;	
		    	dir = 'R';
		    }
		 }
		 //cout<<i<<j<<dir<<" ";
	}

	if(dir == 'R')
		cout<<i<<"\t"<<j-1;
	else if(dir == 'D')
		cout<<i-1<<"\t"<<j;
	else if(dir == 'U')
		cout<<i+1<<"\t"<<j;
	else if(dir == 'L')
		cout<<i<<"\t"<<j+1;

//cout<<dir;
	return 0;
}