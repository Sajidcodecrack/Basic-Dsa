#include <iostream>
using namespace std;
int main()
{
    int a[100][100];
    int i, j;
    int r, c;
    cout << "Enter the value of row : " << endl;
    cin >> r;
    cout << "Enter the value of coloumn : " << endl;
    cin >> c;
    cout << "Taking user input" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"Showing user information "<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
     
    for (i = 0; i < r; i++)
    {
        for (j = i; j < c; j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }
    cout << "After transposing " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout<<"\n";
    }
}