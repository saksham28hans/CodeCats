#include <bits/stdc++.h>
using namespace std;

void dis_arr_rev(vector<int> arr,int idx)
{
    if(idx < 0)
    return;
	cout<<arr[idx]<<endl;
	dis_arr_rev(arr,idx-1);
}
int main()
{
    int n,idx;
    cin>>n;
    idx = n-1;
    vector<int> arr(n);  
    for(int i=0;i<n;i++)
    cin>>arr[i];

    dis_arr_rev(arr,idx); 
	return 0;
}