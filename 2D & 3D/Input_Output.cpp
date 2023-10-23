#include <iostream>
using namespace std;

int main()
{
    int r, c;
    int a[100][100];
    int i, j;
    
    cout << "Enter the value of row: " << endl;
    cin >> r;
    cout << "Enter the value of column: " << endl;
    cin >> c;
    cout << "Taking input for the matrix" << endl;
    
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    
    cout << "Showing the input of the matrix" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    
    cout << "Printing the values of the matrix" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
