#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int divisor, reverse, i;
    int sum = 0;
    cout << "Enter the number : " << endl;
    cin >> n;
    while (n > 0)
    {
        n = n % 10;
        sum = sum + pow(n, 3);
        n = n / 10;
    }
    if (sum == n)
    {
        cout << "Number is armstrong" < endl;
    }
    else
    {
        cout << "Number is not armstrong" << endl;
    }
    return 0;
}