#include <iostream>
using namespace std;

#define n 100
class stack
{
    int *a;
    int top;

public:
    stack()
    {
        a = new int[n];
        top = -1; // Index number //
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack overflow " << endl;
            return;
        }
        top++;
        a[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow no elements in stack" << endl;
            return;
        }

        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"No elements in stack "<<endl;
            return -1;
        }
        return a[top];
    }

    bool empty()
    {
        return top==-1;
    }
};
int main()
{
    stack s;
    s.push(2);
    s.push(3);
    s.push(5);
    // cout <<s.Top() <<endl;
    s.pop();
    cout<<s.Top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    s.empty();
    cout<<s.Top()<<endl;
    return 0;
}