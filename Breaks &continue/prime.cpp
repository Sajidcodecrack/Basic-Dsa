#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number" << endl;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Non-Prime" << endl;
            break;
        }
    }
    if (n == i)
    {
        cout << "Prime number " << endl;
    }
    return 0;
}