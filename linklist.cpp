#include<iostream>
using namespace std;
class node
{
public:
    int info;
    node *next;
    friend void printlist(node );
    friend void start(node ,int );
    friend void insertafter(node ,int );
    friend void push(node , int );
    friend void app(node ,int );
};
void printlist(node *n)
{
    while(n!=NULL)
    {
        cout<<n->info;
        n=n->next;
    }
}
void start(node *n,int a)
{
    n->info=a;
}
void insertafter(node *pre_node,int a)
{
    node *new_node=new node();
    new_node->next=pre_node->next;
    pre_node->next=new_node;
    new_node->info=a;


}
void push(node **first , int new_data)
{
    node* new_node = new node();
    new_node->info = new_data;
    new_node->next = *first;
    *first = new_node;
}

void app(node *first,int a)
{

    node *new_node=new node();
     while(first->next!=NULL)
    {
      first=first->next;
    }
    first->next=new_node;
    new_node->info=a;
    new_node->next=NULL;


}
int main()
{

   node *n1=new node();
   start(n1,1);
   app(n1,3);
   app(n1,4);
   insertafter(n1,2);
   push(&n1,0);
   printlist(n1);
}
