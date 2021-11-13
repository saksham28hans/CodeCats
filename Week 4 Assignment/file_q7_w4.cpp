#include <bits/stdc++.h>
using namespace std;
 

void final_pos(int x, int y)
{
  
  if(y%4==1)
  {
    if(x&1==1)
      x += y;
    else
      x -=y;
  }
  else if(y%4==2)
  {
    if(x&1==1)
      x = x - y + (y-1);
    else
      x = x + y - (y-1);
  }
   else if(y%4==3)
  {
    if(x&1==1)
      x = x - y - (y-1) + (y-2);
    else
      x = x + y + (y-1) - (y-2);
  }
cout<<endl<<"The grasshopper's final position is: "<<x<<endl<<endl;
}
int main()
{
  int num,x,y;
  cout<<"Enter the number of test cases: ";
  cin>>num;
  cout<<num<<endl<<endl;
  for(int i=1;i<=num;i++)
  {
    cout<<"Enter the coordiante of the initial position and the number of jumps for test case "<<i<<" : ";
    cin>>x>>y;
    cout<<endl<<x<<"\t"<<y;
    final_pos(x,y);
  }
  return 0;
}
  