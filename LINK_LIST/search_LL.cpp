
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
    void push_front(int val)//O(1)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head; // establish connection with the head node
            head = newNode;       // head will be the new node
        }
    }
    void push_back(int val)//O(1)
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

    int search(int key){//O(n)

        Node* temp=head;
        int idx=0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp=temp->next;
            idx++;
        }
        return -1;
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
    

    ll.print();
    cout << "FOUND at index :"<< ll.search(3) << endl;
    return 0;
}
