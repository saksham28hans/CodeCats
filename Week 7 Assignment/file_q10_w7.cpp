#include <bits/stdc++.h>
using namespace std;

void spiral(int r, int c, vector<vector<int>> mat)
{
	int k = 0,l=0;
    cout<<endl;
    cout<<"Matrix in spiral format is: "<<endl;
    while(k<r && l<c)
    {
	for(int i=l;i<c;i++)
	    cout<<mat[k][i]<<"\t";
	k++;
	for(int j=k;j<r;j++)
		cout<<mat[j][c-1]<<"\t";
	c--;
	for(int t=c-1;t>=l;t--)
		cout<<mat[r-1][t]<<"\t";
	r--;
	for(int m=r-1;m>=k;m--)
		cout<<mat[m][l]<<"\t";
	l++;
}
}
int main()
{
	int r,c;
	cout<<"Enter thr no. of rows: ";
	cin>>r;
	cout<<r<<endl;
	cout<<"Enter the no. of columns: ";
	cin>>c;
	cout<<c<<endl;
	vector<vector<int>> mat(r,vector<int> (c));
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>mat[i][j];
			cout<<mat[i][j]<<"\t";
		}
	}
	spiral(r,c,mat);
	return 0;
}