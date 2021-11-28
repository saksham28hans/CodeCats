#include <bits/stdc++.h>
using namespace std;
#define I 1
#define V 5
#define X 10
#define L 50
#define C 100
#define D 500
#define M 1000

void rom_to_dec(string roman)
{
int dec =0;
for(int i=0;i<roman.size();i++)
{
	if(roman[i] == 'I')
	{
		if(roman[i+1] == 'V')
		{
			dec += (V-I);
			i++;
		}
		else if(roman[i+1] == 'X')
		{
			dec += (X-I);
			i++;
		}
		else
			dec += I;
	}

	else if(roman[i] == 'X')
	{
		if(roman[i+1] == 'L')
		{
			dec += (L-X);
			i++;
		}
		else if(roman[i+1] == 'C')
		{
			dec += (C-X);
			i++;
		}
		else
			dec += X;
	}

	else if(roman[i] == 'C')
	{
		if(roman[i+1] == 'D')
		{
			dec += (D-C);
			i++;
		}
		else if(roman[i+1] == 'M')
		{
			dec += (M-C);
			i++;
		}
		else
			dec += C;
	}
	else if(roman[i] == 'V')
		dec += V;	
	else if(roman[i] == 'L')
		dec += L;	
	else if(roman[i] == 'D')
		dec += D;
	else if(roman[i] == 'M')
		dec += M;		
}
cout<<"The decimal equivalent of the roman number "<<roman<<" is: "<<dec;
}

int main()
{
	string roman;
	cout<<"Enter a roman number: ";
	cin>>roman;
	cout<<roman<<endl;
	rom_to_dec(roman);
	return 0;
}