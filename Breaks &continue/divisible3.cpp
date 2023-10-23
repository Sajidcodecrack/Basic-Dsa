#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Printing the numbers from 0 to 100" << endl;
    for (i = 1; i <= 100; i++)
    {
        cout << i << endl;
        // if(i%3==0)
        // {
        //     cout<<i<<endl;
        // }
    }
    cout << "Prinitng the divisible numbers " << endl;
    for (i = 0; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << endl;
        }
    }
}