#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {3, 4, 2, 51, 13, 9};

    sort(a, a + 6);        //Ascending sort 

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    sort(a,a+6,greater<int>());

    cout<<"\nDescending sort "<<endl; 
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
