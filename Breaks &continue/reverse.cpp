#include<iostream>
using namespace std;
int main()
{
    int reverse=0;
    int n;
    int divisor;
    cout<<"Enter the number for reverse : "<<endl;
    cin>>n;
    while(n>0)
    {
        divisor=n%10;
        reverse=reverse*10+divisor;
        n=n/10;
    }
    cout<<"Reverse number : " <<reverse<<endl;
}