#include<iostream>
using namespace std;
int main()
{
    float add,sub,mul,div,per;
    
    cout<<"    ********      This calculator is for only two numbers   ********  "<<endl;
    float a,b;
    cout<<"Enter the first value : "<<endl;
    cin>>a;
    cout<<"Enter the second value : "<<endl;
    cin>>b;

    add=a+b;
    cout<<"Summation : " <<add<<endl;
    
    sub=b-a;
    cout<<"Subtraction : " <<sub<<endl;

    mul=a*b;
    cout<<"Multilication : " <<mul <<endl;

    div=a/b;
    cout<<"Dividation : " <<div<<endl;

    per=(a/b)*100;
    cout<<"Percentage Level : " <<per<<endl;

    return 0;



}