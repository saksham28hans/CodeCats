#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
 
 int facto(int b)
  {
  int carry = 0,k_nxt=0,cnt=0;
  vector<int> st_fact(200);
  st_fact[0]=1;
  for(int i=2;i<=b;i++)
  {
    for(int j=0;j<=k_nxt;j++)
    {
      st_fact[j] = st_fact[j]*i + carry;
      carry = st_fact[j]/10;
      st_fact[j] = st_fact[j]%10;
    }
    while(carry>0)
    {
      k_nxt++;
      st_fact[k_nxt] = carry%10;
      carry = carry/10;
    }
  }
 // cout<<k_nxt;
  for(int i=0;i<=k_nxt;i++)
  {
    //cout<<st_fact[i];
   if(st_fact[i]==0)
      cnt += 1;
    else
      return cnt;
  }
 }
 void fact_fun(vector<int> fact,int num)
 {
  long int zn,fct;
  for(int i =0;i<num;i++)
  {
    fct = facto(fact[i]);
    cout<<fct<<endl;
  }
}
  
 
int main()
{
  int num, f =1;
  cout<<"Enter the number of values you want to input: ";
  cin>>num;
  vector<int> fact(num);
  cout<<num<<"\n";
  for(int i=0;i<num;i++)
  {
    cin>>fact[i];
  }
  fact_fun(fact,num);
  return 0;
}