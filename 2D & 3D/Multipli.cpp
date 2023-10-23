#include <iostream>
using namespace std;
int main()
{
    int a[100][100];
    int b[100][100];
    int p[100][100];
    int i, j, k;
    int r, c;
    int r2, c2;
    int sum = 0;
    cout << "Enter the value of row : " << endl;
    cin >> r;
    cout << "Enter the value of coloumn : " << endl;
    cin >> c;
    cout << "Taking input from user in matrix_1" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the row of the second matrix : " << endl;
    cin >> r2;
    cout << "Enter the coloumn of the second matrix : " << endl;
    cin >> c2;

    cout << "Taking input from user in matrix_2" << endl;
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
    }
    if (c != r2)
    {
        cout << "The process is not possible between A & B " << endl;
    }
    else
    {
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c2; j++)
            {
                sum = 0;
                for (k = 0; k < r2; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                p[i][j] = sum;
            }
        }
    }

    cout << "Result of the Mat_A & Mat_B multiplication " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}