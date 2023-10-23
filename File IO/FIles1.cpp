#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    string name;
    int age;
    int n;
    cout<<"Number of people "<<endl;
    cin>>n;

    ofstream s;
    s.open("sajid.txt",ios :: out | ios :: app);
    for( int i=0; i<n;i++)
    {
        cout<<"Enter name : ";
        cin>>name;
        s<<name<<"\t";

        cout<<"Enter age " <<endl;
        cin>>age;
        s<<age<<endl;
        cin.ignore();


    }
    s.close();
}
