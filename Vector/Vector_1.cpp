#include <iostream>
#include <vector>       // A dynamic array //
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);

    int i;
    for (i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }// Taking inputs and printing inputs from user using basic of vector 
    return 0;
}