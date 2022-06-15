#include"bits/stdc++.h"

using namespace std;

struct Node
{
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=0;
    }
};

Node *head=0;
Node* last=0;

void insert(int i)
{
    Node *n = new Node(i);

    if(head==NULL)
    {
        head=n;
        last=n;
    }

    last->next=n;
    last=n;
}

void deleteList()
{
    Node *ptr=head;
    while(ptr->next!=0)
    {
        Node *delPtr=ptr;
        ptr=ptr->next;

        delete delPtr;
    }
    
    delete last;
    head=0;
    last=0;
}

void print()
{
    Node* ptr=head;
    
    while(ptr->next!=0)
    {
        cout<<ptr->val<<" ";
        ptr=ptr->next;
    }
    cout<<ptr->val<<endl;
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    
    print();
    
    deleteList();
    
    print();
}