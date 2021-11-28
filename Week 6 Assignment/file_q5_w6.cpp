#include <bits/stdc++.h>
using namespace std;

void stones_and_jewels(string jewels,string stones)
{
vector<bool> count(255);
int cnt = 0;
for(int i=0;i<jewels.size();i++)
{
	count[jewels[i]] = true;
}
for(int i=0;i<stones.size();i++)
{
	if(count[stones[i]])
		cnt +=1;
}
cout<<"The number of stones that are also jewels is: "<<cnt;
}

int main()
{
	string jewels,stones;
	cout<<"Enter string of jewels: ";
	cin>>jewels;
	cout<<jewels<<endl;
	cout<<"Enter string of stones: ";
	cin>>stones;
	cout<<stones<<endl;
	stones_and_jewels(jewels,stones);
	return 0;
}