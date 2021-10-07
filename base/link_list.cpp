#include <iostream>
using namespace std;
template <typename T>
class node
{
public:
    T value;
    node *next;
    node *prev;
};

template <typename TT>
class Link
{
private:
    int size;
    int sum;

public:
    void push_back(TT value)
    {
        node *n = new node();
        n.value = value;
        n.next = 0;
        n.prev = 0;

        this.size + = 1;
    }
};
int main()
{
    Link<int> l;
    l.push_back(12);
}
