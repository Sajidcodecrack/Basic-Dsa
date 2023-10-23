#include <iostream>
using namespace std;
int main()
{
    int a = 5;
     int *b = &a;
    // Reference operator //  --- print the address of those varibales//

    //    cout<<&a<<endl;
    //    cout<<&b<<endl;

    // De-reference operator // --- print the value of pointing address//

  //  cout << *b << endl;
    // Lets update it with pointer //
    // *b=23;
    // cout<<*b<<endl;
//  pointer increment and decrement //
 * b++;
  cout<<*b<<endl;
}