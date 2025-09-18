

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

    void push_back(int val) // O(1)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode; // connect the old tail to the new node
            tail = newNode;       // tail will be the new node
        }
    }
    void pop_back()
    { // O(n)

        if (head == NULL)
        {
            cout << "List is null" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next != tail) // (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
    void print()
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->data << "-> ";
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
    
    ll.pop_back();

    
    ll.print();
    return 0;
}
