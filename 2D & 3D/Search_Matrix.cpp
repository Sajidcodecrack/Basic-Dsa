#include<iostream>
using namespace std;
int main()
{
    int r,c;
    int i,j;
    int a[100][100];
    cout<<"Enter the value of row : "<<endl;
    cin>>r;
    cout<<"Enter the value of coloumn : "<<endl;
    cin>>c;
    cout<<"Taking input from user : "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Search the number : "<<endl;
    int s;
    cin>>s;
    bool flag=false;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        { 
          if(  a[i][j]==s)
          {
             flag=true;
          }
        }
    }
    if(flag==true)
    {
        cout<<"found"<<endl;
    }
    else
    {
        cout<<"nope"<<endl;
    }


}