#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ofstream O1("Output_1.txt", ios ::out | ios ::app);

class stack
{
    int *array;
    int top;
    int n;

public:
    stack(int size)
    {
        n = size;
        array = new int[n];
        top = -1;
    }
    void push(int x)
    {
       
        if (top >= n - 1)
        {
            O1 << "Stack overflow " << endl;
            return;
        }
       
        top++;
        array[top] = x;
        Print_stack();
        O1 << endl;
    }
    void pop()
    {

        if (top <= -1)
        {
            O1 << "Stack is underflow " << endl;
            return;
        }
        top--;
        Print_stack();
        O1 << endl;
    }
    int peek()
    {
        if (top == -1)
        {
            O1 << "No elements in stack " << endl;
            return -1;
        }
        return array[top];
    }
    bool empty()
    {
        return top == -1;
    }
    void Print_stack()
    {
        if (empty())
        {
            O1 << "stack is empty" << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            O1 << array[i] << " ";
        }
        cout << endl;
    }
    void Print_Structure()
    {
        O1<< " This is Array " <<endl;
    }
};

int main()
{

    ifstream I1("Input_1.txt");

    string t;
    int n;
    I1 >> t;
    I1 >> n;

    if (t == "ARRAY")
    {
        stack skt(n);
        string operation;
        int order;
        while (I1 >> operation)
        {
            if (operation == "PUSH")
            {
                I1 >> order;
                skt.push(order);
            }
            else if (operation == "POP")
            {

                skt.pop();
            }
            else if (operation == "TOP")
            {
                O1 << skt.peek() << endl;
            }
            else if (operation == "PRINTS")
            {
                skt.Print_stack();
            }
            else if ( operation== "PRINTT")
            {
                skt.Print_Structure();
            }
        }
    }
    I1.close();
    O1.close();
    return 0;
}