#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(23);
    v.push_back(34);
    v.pop_back();  // Removes the last element using the stack shrink  operation//
    v.push_back(112);
    v.push_back(345);
    v.pop_back();
    

    // Another process to print data using iterator //

    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl; // Iterator is a one kind of pointer //
    }
    cout << "Another process " << endl;
    // Using 'auto' to make it more optimistic
    // for(auto element : v)
    // {
    //     cout<<element<<endl;
    // }
    vector<int> v2(3,60);
    // swap(v,v2);
    cout<<"After swapping the value "<<endl;
    for(auto element: v2)
    {
        cout<<element<<endl;
    }
    for(auto element: v)
    {
        cout<<element<<endl;
    }
    //-Sort_Function 
    sort(v.begin(),v.end());

    

}