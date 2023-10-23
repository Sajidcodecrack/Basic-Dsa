#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

struct Pair
{
    int a, b;
};

bool comp(Pair p1, Pair p2)
{
{
    if (p1.a != p2.a)
    {
        return p1.a > p2.a; // Sort 'a' in descending order
    }
    else
    {
        return p1.b < p2.b; // If 'a' values are the same, sort 'b' in ascending order
    }
}

}

int main()
{
    int n;
    cout << "Enter the number of pairs: " << endl;
    cin >> n;
    Pair arr[n];
    cout << "Enter the values of a and b for each pair: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].a >> arr[i].b;
    }
    sort(arr, arr + n, comp);
    cout << "Sorted pairs of (a and b):" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a:" << arr[i].a << " b:" << arr[i].b << endl;
    }

    return 0;
}
