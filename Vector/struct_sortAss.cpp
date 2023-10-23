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
    return p1.a > p2.a;
   
}
int main()
{
    Pair arr[] = {{5, 100}, {3, 9}, {6, 12}, {1, 5}, {4, 7}, {8, 13}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, comp);
    for (int i = 0; i < n; i++)
    {
        cout << "a:" << arr[i].a << ":"
             << "b:" << arr[i].b << endl;
    }

    return 0;
}