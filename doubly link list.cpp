#include<iostream>
using namespace std;
class node
{
public:
    int info;
    node *next;
    node *pre;
};
void app(node *n,int a)
{
    node *new_node=new node();
    while(n->next!=NULL)
    {
        n=n->next;
    }
    n->next=new_node;
    new_node->info=a;
    new_node->pre=n;
    new_node->next=NULL;
}
void printl(node *n)
{
    while(n!=NULL)
    {
        cout<<n->info;
        n=n->next;
    }
}
int main()
{
    node *first=new node();
    first->info=0;
    first->pre=NULL;
    first->next=NULL;
    app(first,1);
    app(first,2);
    printl(first);
}
