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
    ll.print();
    return 0;

}
