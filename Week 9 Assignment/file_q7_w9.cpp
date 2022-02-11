#include <bits/stdc++.h>
using namespace std;

void dis_arr(vector<int> arr,int idx)
{
    if(idx == arr.size())
    return;
	cout<<arr[idx]<<endl;
	dis_arr(arr,idx+1);
}
int main()
{
    int n,idx=0;
    cin>>n;
    vector<int> arr(n);  
    for(int i=0;i<n;i++)
    cin>>arr[i];

    dis_arr(arr,idx); 
	return 0;
}