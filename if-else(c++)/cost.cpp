#include<iostream>
using namespace std;
int main()
{
    float price, unit,Total;
    cout<<"Enter the weight of shopping : "<<endl;
    cin>>unit;
    cout<<"Enter the price of elements :"<<endl;
    cin>>price;
    Total=price*unit;
    if(Total>=1000)
    {

        float TotalD=Total-(.1*Total);
        cout<<"Price without discount : " <<Total<<endl;
        cout<<"Discounted price : "<<TotalD<<endl;
    }
    else
    {
        cout<<"Final price :"<<Total<<endl;
    }
    return 0;
}