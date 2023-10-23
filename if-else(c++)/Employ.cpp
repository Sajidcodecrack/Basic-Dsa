#include<iostream>
using namespace std;
int main()
{
    float year,salary,bonous;
    cout<<"Enter employ working year : "<<endl;
    cin>>year;
    cout<<"Employ salary :"<<endl;
    cin>>salary;
    if(year>=5)
    {
        bonous=salary+salary*.05;
        cout<<"Bonoused salary : "<<bonous<<endl;
    }
    else
    {
        cout<<" Salary : "<<salary<<endl;
    }
    return 0;

}