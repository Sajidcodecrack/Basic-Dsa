#include<iostream>`
#include<cmath>`
using namespace std;
int main()
{
    float AreaC,r;
    cout<<"Enter the radius :"<<endl;
    cin>>r;
    AreaC=M_PI * r *r;
    cout<<"Radius :" <<AreaC<<endl;
  
    float l,w;
  
    cout<<"Enter width : " <<endl;
    cin>>w;
    cout<<"Enter lenght : " <<endl;
    cin>>l;
    float AreaR=l*w;
    cout<<"Area of a rectangle : " <<AreaR<<endl;
   
    float s;
    cout<<"Enter the value of  the side to a square : " <<endl;
    cin>>s;
    float Areas= s*s;
    cout<<"Area of the square : " <<Areas<<endl;

    float b,h;
    cout<<"Enter the triangle base : "<<endl;
    cin>>b;
    cout<<"Enter the triangle height :"<<endl;
    cin>>h;
    float areaT=.5*b*h;
    cout<<"Area of the Triangle : "<<areaT<<endl;

    return 0;
}