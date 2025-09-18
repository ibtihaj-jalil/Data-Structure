#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void reverseList()
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        tail = head;
        head = prev;
    }

    void print()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;

    ll.push_back(3);
    ll.push_back(2);
    ll.push_back(1);

    cout << "Before Reverse: ";
    ll.print();
    ll.reverseList();
    cout << "After Reverse: ";
    ll.print();

    return 0;
}
