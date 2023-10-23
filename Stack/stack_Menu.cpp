#include <iostream>
using namespace std;
int s[100];
int n = 100, top = -1;
void push(int x)
{
    if (top == n - 1)
    {
        cout << "Stack overflow " << endl;
        return;
    }
    top++;
    s[top] = x;
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack underflow " << endl;
        return;
    }
    else
    {
        cout << "The popped elements is " << s[top] << endl;
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        cout << "Stack elements are :";
        for (int i = top; i >= 0; i--)
        {
            cout << s[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "stack is empty " << endl;
    }
}
int main()
{
    int c, x;
    cout << "(1)-> Push value in stack " << endl;
    cout << "(2)-> Pop value from stack " << endl;
    cout << "(3)-> Display value from stack" << endl;
    cout << "(4)-> Exit" << endl;

    while (c != 4)
    {
        cout << " Enter choice : " << endl;
        cin >> c;
        switch (c)
        {
        case 1:
        {
            cout << "Enter the value pushed " << endl;
            cin >> x;
            push(x);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            cout << "Exit " << endl;
        }
        default:
        {
            cout << "Invalid option " << endl;
        }
        }
    }
    return 0;
}