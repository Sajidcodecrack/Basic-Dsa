#include<iostream>
using namespace std;
int main()
{
  int i;
  for(i=0;i<10;i++)
  {
    cout<<i<<endl;
    if(i==5)
    {
      continue;
    }
    
  }
  cout<<i<<endl;
}