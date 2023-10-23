#include <iostream>
using namespace std;
class student
{
    string name;

public:
    int age;
    bool gender;
    // Constructor//
    student()
    {
        cout << "Default_Constructor " << endl;
    }
    student(string s, int a, bool g) // Parameterized constructor //
    {
        cout << "Parameterised constructor " << endl;
        name = s;
        age = a;
        gender = g;
    }
    student(student &a)
    {
        cout << "Copy-constructor " << endl;
        a.name = name;
        a.age = age;
        a.gender = gender;
    }
    void setName(string s)
    {
        name = s;
    }
    void getname()
    {
        cout << name << endl;
    }
    void printInfo()
    {
        cout << "Name:" << endl;
        cout << name << endl;
        cout << "Age:" << endl;
        cout << age << endl;
        cout << "Gender :" << endl;
        cout << gender << endl;
    }
    bool operator==(student &a)
    {
        if (name == a.name, age == a.age, gender == a.gender)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;

    //     cout << "Enter name :";
    //     cin >> s;
    //     arr[i].setName(s);
    //     cout << "Enter age :";
    //     cin >> arr[i].age;
    //     cout << "Enter gender ";
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    student a("sajid", 23, 1);
    //   a.printInfo();
    student b;
    student c = a;
    if (c == a)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }
    return 0;
}
