#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
struct Pair
{
    int a;
    int b;
};
bool comp(Pair p1, Pair p2)
{
    return p1.a+p1.b > p2.a+p2.b;
}
int main()
{
    cout << "Enter the value of n" << endl;
    int n;
    cin >> n;
    Pair arr[n];
    cout << "Enter the value of pairs of a and b " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].a >>  arr[i].b;
    }
    sort(arr, arr + n, comp);
    for (int i = 0; i < n; i++)
    {
        cout << "a : " << arr[i].a << " b " <<  arr[i].b << " Summation : " <<arr[i].a+arr[i].b<<endl;
    }

    return 0;
}