#include<iostream>
using namespace std;
int main()
{
    int phy,chem,math,bio,ict;
    cout<<"Enter the physics number :";
     cin>>phy;
    cout<<"Enter the chemistry number :";
    cin>>chem;
    cout<<"Enter the math number :";
    cin>>math;
    cout<<"Enter the biology number :";
    cin>>bio;
    cout<<"Enter the ict number :";
    cin>>ict;

    int sum;
    sum=phy+chem+math+bio+ict;
    cout<<"Total number to all subjects :  " <<sum<<endl;  
    float avg; 
    avg=(float)sum/5;
    cout<<"Average number of his/her result : " <<avg;
    return 0;
    
}