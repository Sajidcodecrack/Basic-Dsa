#include <iostream>
using namespace std;

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
// Adding to the first node as insert at head//

void InsertAthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
// Adding to the last node //
void InsertAtTail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;
    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
// Searching operation in linklist //
bool search(node *&head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertAtTail(head, 4);
    InsertAtTail(head, 8);
    print(head);
    InsertAthead(head, 9);
    print(head);
    cout<<search(head, 5);
}
