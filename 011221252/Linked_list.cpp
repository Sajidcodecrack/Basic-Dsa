#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ofstream O2("Output2_2.txt", ios ::out | ios::app);

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class Stack
{
    node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void push(int val)
    {
        node *n = new node(val);

        n->next = top;

        top = n;
        O2 << "PUSH " << val << endl;
    }
    int pop()
    {
        if (top)
        {
            int val = top->data;
            node *to_delete = top;
            top = top->next;
            delete to_delete;
            return val;
        }
        return -1;
    }
    int Top()
    {
        if (top)
        {
            int val = top->data;
            return val;
        }

        return -1;
    }
    void Print_stack()
    {
        node *temp = top;
        while (temp != NULL)
        {
            O2 << temp->data << " ";
            temp = temp->next;
        }
        // O2<< "NULL "<<endl;
        //  cout<<"NULL"<<endl;
    }
    void Print_Structure()
    {
        O2 << "This is a Linkedlist " << endl;
    }
};

int main()
{
    ifstream I2("Input_2.txt");
    string t;
    string operation;
    int order;
    I2 >> t;
    Stack skt;
    while (I2 >> operation)
    {
        if (operation == "PUSH")
        {
            I2 >> order;
            skt.push(order);
        }
        else if (operation == "POP")
        {
            int val = skt.pop();
            if (val != -1)
            {
                O2 << "POP " << val << endl;
            }
            else
            {
                O2 << "Stack underflow " << endl;
            }
        }

        else if (operation == "TOP")
        {
            O2 << skt.Top() << endl;
        }
        else if (operation == "PRINTS")
        {
            skt.Print_stack();
        }
        else if (operation == "PRINTT")
        {
            skt.Print_Structure();
        }
    }
    I2.close();
    O2.close();

    return 0;
}
