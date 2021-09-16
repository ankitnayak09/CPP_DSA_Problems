#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *start = NULL;

node *createNode(int next)
{
    node *n = new node();
    n->data = next;
    n->next = NULL;
    return n;
}
void add(int beg)
{
    node *newNode = createNode(beg);
    if (start == NULL)
    {
        start = newNode;
    }
    else
    {
        newNode->next = start;
        start = newNode;
    }
}

int main()
{
    add(7);
    add(15);
    add(11);
    add(19);
    node *ptr = start;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    cout << count;
    
    return 0;
}





