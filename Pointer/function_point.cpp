#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main()

{
    int a = 1;
    int b = 6;
    // int *c = &a;
    // int *d = &b;
    swap(&a, &b);
    cout << a << " " << b << endl;
    return 0;
}