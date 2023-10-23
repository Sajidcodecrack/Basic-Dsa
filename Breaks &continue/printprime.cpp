#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int i, j;
    cout << "Enter the start point to detect prime :" << endl;
    cin >> a;
    cout << "Enter the last point to detect the prime :" << endl;
    cin >> b;
    for (i = a; i <= b; i++)
    {
        for (j = 2; j < b; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
        {
            cout << "Prime numbers : " << j << endl;
        }
    }
    return 0;
}