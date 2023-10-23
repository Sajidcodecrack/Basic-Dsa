#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string name;
    int age;
    int id;
    int n;
    ofstream s;
    s.open("employ.txt", ios::out | ios::app);
    cout << "Enter the number to add information in system datbase " << endl;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Enter employ name : " << endl;
        getline(cin, name);

        cout << "Enter employ age : " << endl;j       7
        cin >> age;
        cin.ignore();
        cout << "Enter employ id :" << endl;
        cin >> id;
        cin.ignore();

        // Printing -region//
        s << "Name of Employ : " << name << endl;
        s << "Age  of  Emplpy : " << age << endl;
        s << "Id  of  Employ : " << id << endl;
    }
    s.close();
    return 0;
}