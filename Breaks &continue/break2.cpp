#include<iostream>
using namespace std;
int main()
{
    int i;
    int pocket=3000;
    for(i=1;i<=30;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        if(pocket==0)
        {
            break;
        }
        cout<<"GO-Away"<<endl;
        pocket=pocket-3000;
    }

    return 0;
}