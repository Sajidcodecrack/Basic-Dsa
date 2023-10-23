#include <iostream>
using namespace std;
int main()
{
    int t;
    int n;
    int a[50];
    int tr[1000];
   // cout << "Enter test-case" << endl;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
      //  cout << "Enter athelet" << endl;
        cin >> n;
      //  cout << "Enter strength" << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        // Sorting //
        int temp;
        for (int k = 0; k < n - 1; k++)
        {
            for (int l = 0; l < n - k - 1; l++)
            {
                if (a[l] > a[l + 1])
                {
                    temp = a[l+1];
                    a[l+1] = a[l];
                    a[l] = temp;
                }
            }
        }
        // int k;
        // tr[i]=a[k];
        // }
        // cout<<"after sorthing "<<endl;
        //  for(int i=0;i<t;i++)
        //  {
        //     int k;
        //     cout<<a[k];

        //  }
        int min=a[n-1]-a[0];
        for(int m=0;m<n-1;m++)
        {
            int res=a[m+1]-a[m];
            if(min>=res)
            {
                min=res;
            }
        }
        tr[i]=min;
    }
    for(int i=0;i<t;i++)
    {
        cout<<tr[i]<<"\n";
    }
}