#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> user_vector;
    int num;
    cout << "Enter the number of elements want to enter in a vector " << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int element;
        cout << "Enter elements :" << endl;
        cin >> element;
        user_vector.push_back(element);
    }
     user_vector.pop_back();
    for (int i = 0; i < user_vector.size(); i++)
    {

        cout << user_vector[i];
    }
    user_vector.pop_back();
    
}