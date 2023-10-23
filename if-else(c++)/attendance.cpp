#include<iostream>
using namespace std;
int main()
{
    float  att,total;
    cout<<"Enter the total class : "<<endl;
    cin>>total;
    cout<<"Enter the attendant class : "<<endl;
    cin>>att;
    float per= ((att/total))*100;
    cout<<"Present percentage in class : "<<per<<endl;
    if(per>75)
    {
        cout<<"Yes he/she can  seat in exam "<<endl;

    }
    else
    {
        cout<<"Sorry cant seat in exam "<<per<<endl;
    }
    return 0;
}