#include <iostream>
using namespace std;
int main()
{
    int r, c;
    int i, j;
    int a[100][100];
    int b[100][100];
    cout << "Enter the value of row " << endl;
    cin >> r;
    cout << "Enter the value of coloumn" << endl;
    cin >> c;
    cout << "Taking input of the matrix -1 " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Taking input for the matrix -2" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Printing Matrix 1 & 2 " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
             
    }
    cout<<"\n\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}