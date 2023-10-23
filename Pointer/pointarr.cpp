#include<iostream>
using namespace std;
int main()
{
    // int a[]={10,20,40};
    // // cout<<*a<<endl;
    // int *b=a;
    // for(int i=0;i<3;i++)
    // {
    //     cout<<*b<<endl;
    //     b++;
    // }
    int a=20;
    int *b=&a;
    // cout<<*b<<endl;
    int **c= &b;
    cout<<*c<<endl;
    cout<<**c<<endl;
}