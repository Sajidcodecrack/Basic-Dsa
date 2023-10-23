#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void Insert_First(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void Insert_Last(node *&head, int val)
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
void Head_deletion(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}
void deletion(node *&head, int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        Head_deletion(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()

{
    node *head = NULL;
    Insert_Last(head, 7);
    Insert_Last(head, 8);
    Insert_First(head, 4);
    Insert_First(head, 5);
    Insert_First(head, 6);
    print(head);
    // deletion(head, 4);
    print(head);
    Head_deletion(head);
    print(head);
    return 0;
}