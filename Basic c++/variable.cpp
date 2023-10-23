#include<iostream>
using namespace std;  // Import the standard file so we dont need to write all the time //
int main()
{
    int a;  //declaration//
    a=12;   //initialisation//
   
    cout<<"Size of  interger\n"<<sizeof(a)<<endl;

    float b;
    b=4.64;
    cout<<"Size of the float\n"<< sizeof(b)<<endl;

    char c;
    cout<<"Size of the character \n" <<sizeof(c)<<endl;

    bool d;
    cout<<"Size of boolean \n"<< sizeof(d)<<endl;

    short int s;
    long int l;
    cout<<"Short Integer size::\n" <<sizeof(s);
    cout<<"\n"; 
    cout<<"Long Integer size:: \n" <<sizeof(l)<<endl;
   
    cout<<"Thanks for coding with sajid"<< endl;


    return 0;
}