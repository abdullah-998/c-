#include<iostream>
using namespace std;
template <typename T>
class Node
{
    public:
    T value;
    Node* next;
};

template <typename TT>
class List
{
    private:
    int size;
    bool isEmpty;
    Node <TT> *head;
    Node <TT> *last;
    
    public:
    List()
    {
        this->size = 0;
        this-> isEmpty = true;
        this->head=0; 
        this->last =0;
    }

   
    void insert(TT value)
    {
        Node <TT> *node = new Node<TT>;
        node->value = value;
        node->next=0;
        if(head==0 and last==0)
        {
            head=node;
            last = node;
            isEmpty= false;
        }
        else
        {
            last->next= node;
            last = node;
        }
        
        size++;
    }
    void insertAtFirst(TT value)
    {
        Node<TT> *node = new Node<TT>;
        node->value= value;
        node->next= head;

        head= node;
        size++;
    }
    void insertAtLast(TT value)
    {
        insert(value);
    }
    void insertNthPosition(TT value,int index)
    {
        if(index<=size and index>1)
        {
            Node<TT> * node = new Node<TT>;
            node->value= value;

            Node<TT> *ptr=head; // first node allready point kora ase

            for(int i=1;i<index-1;i++) // nth noder ager node porjonto
            {
                ptr= ptr->next;
            }
            node->next=ptr->next;
            ptr->next= node;

            size++;
        }
        if(index==1) // first index
        {
            insertAtFirst(value);
        }
        if(index==(size+1))// sizer cheye 1 boro means last e insert
        {
            insertAtLast(value);
        }
    }

    TT get(int index)
    {
        if(index>size or index<1)
        {
            return -1;
        }

        Node<TT> *ptr = head; // pointed at first node

        for(int i=1;i<index;i++) // point to Nth node
        {
            ptr= ptr->next;
        }
        return ptr->value;
    }

    bool remove(TT val)
    {
        bool found = false;
    }

    bool removeAt(int index)
    {
        if(index>size or index<1)
        {
            return false;
        }
    }
    void show()
    {
        Node<TT> *ptr = head;
        while(ptr->next!=0)
        {
            cout<<ptr->value<<" ";
            ptr=ptr->next;
        }
        cout<<ptr->value<<endl;
    }
    ~List()
    {
        Node<TT> *ptr = head;
        Node<TT> *prevptr;
        while(ptr->next!=0)
        {
            prevptr=ptr; // first node assign korl prevptr e 
            ptr= ptr->next; // ptr ke new node e niye gelam
            delete prevptr; // first node delete korlm
        }
        delete ptr; // to detele lastest node
         cout<<"Deletion of dynamic memory complete!!"<<endl;
    }
};

int main()
{
    List<int> l;
    l.insert(10);
    l.insert(11);
    l.insert(12);
    l.insert(14);
    l.insertNthPosition(13,4);
    l.insertNthPosition(15,6);
    l.insertNthPosition(9,1);
    l.insertAtFirst(8);

    l.show();
    cout<<"getting value of index 2:"<<l.get(1)<<endl;
    cout<<"getting value of index 2:"<<l.get(-1)<<endl;
}