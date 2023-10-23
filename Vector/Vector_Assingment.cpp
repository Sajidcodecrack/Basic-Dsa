#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number size  want to enter in vector " << endl;
    cin >> n;
    cout << "Enter the values in vector " << endl;
    int element;
    for (int i = 0; i < n; i++) // Push-operation
    {
        cin >> element;
        v.push_back(element);
    }
    cout << "Printing the elements from vector " << endl;
    for (int i = 0; i < v.size(); i++) // size-operation
    {
        cout << v[i] << endl;
    }
    v.pop_back(); // pop-operation//
    v.pop_back();
    v.erase(v.begin()); // erase-operation//
    cout << "After poping " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}