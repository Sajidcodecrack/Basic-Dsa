#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string name;
    int age;
    ofstream s;
    s.open("sajid.txt", ios::out | ios::app);
    s << "I am sajid ahamed. A software engineer ";
    s << "I am 23 years old \n";
    s << "Yes. Its true that I loved her. \n";
    s << "Yes I always want to marry her \n";
    s.close();
    cout << "Enter your name " << endl;
    getline(cin, name);
    cout << "Enter your age " << endl;
    cin >> age;
    s << "Welcome " << name << endl;
    s << "My age is " << age << endl;
    s.close();

    return 0;
}