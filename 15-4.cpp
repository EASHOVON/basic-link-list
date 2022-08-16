#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;

    // Constructor Creating
    Node(int val)
    {
        // Initializing value and next member
        value = val;
        Next = NULL;
    }
};

void insertTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->Next != NULL)
            cout << " -> ";
        n = n->Next;
    }
    cout << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    int n;
    char ch = 'Y';
    while (ch == 'Y')
    {
        cout << "Enter a number: ";
        cin >> n;
        insertTail(head, n);
        cout << "Do you want to continue (Y/N)? ";
        cin >> ch;
    }
    display(head);
    return 0;
}