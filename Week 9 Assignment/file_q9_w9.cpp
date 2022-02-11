#include <bits/stdc++.h>
using namespace std;

int max_arr(vector<int> arr,int idx)
{
    int max1;
    if(idx == arr.size()-1)
    return arr[idx];
    else
    {
        max1 = max_arr(arr,idx+1);
        return ((arr[idx] > max1 ? arr[idx]: max1));
    }
	
}
int main()
{
    int n,idx=0,max1;
    cin>>n;
    vector<int> arr(n);  
    for(int i=0;i<n;i++)
    cin>>arr[i];
    max1 = max_arr(arr,idx); 
    cout<<max1;
	return 0;
}