#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char op;
    cout << "Enter first number : " << endl;
    cin >> n1;
    cout << "Enter the second number : " << endl;
    cin >> n2;
    cout << "Enter an operator : " << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Summation: " << n1 + n2 << endl;
        break;
    case '-':
        cout << "Subtraction: " << n1 - n2 << endl;
        break;
    case '*':
        cout << "Multiplication : " << n1 * n2 << endl;
        break;
    case '/':
        cout << "dividation : " << n1 / n2 << endl;
        break;

    default:
        cout << "still learning new things to know "<<endl;
         break;
    }

}