#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Enter the value for vector size " << endl;
    int n;
    cin >> n;
    int element;
    cout << "Enter the elements " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    sort(v.begin(), v.end(),greater_equal<int>()); 
    cout << "printing after sorting " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}