#include<iostream>
using namespace std;
class node
{
    int info;
    node *right;
    node *left;
public:
    node()
    {
        info=55;
        right=NULL;
        left=NULL;
    }
    int check(node *n)
    {
        node *n1=this;
        node *n2=n;
        if(n1==NULL&&n2==NULL)
            return 1;
         if(n1->info==n2->info && n1->left->check(n2->left) && n1->right->check(n2->right))
             return 1;
       return 0;
    }
    void append(int a)
    {

        node *tp=this;
        node *nn=new node();
        nn->info=a;
        if(tp->info>a && tp->left==NULL)
        {
            tp->left=nn;
        }
         if(tp->info<a && tp->right==NULL)
        {
            tp->right=nn;
        }
        if(tp->info>a)
          tp->left->append(a);
        if(tp->info<a)
          tp->right->append(a);

    }
    void travers()
    {
        node *tp=this;
        if(tp->left!=NULL)
         tp->left->travers();
        cout<<tp->info<<endl;
        if(tp->right!=NULL)
            tp->right->travers();


    }

};
int main()
{
    node *root1=new node();
    root1->append(1342);
    root1->append(487);
    root1->append(3);
    root1->append(5);
    node *root2=new node();
    root2->append(1342);
    root2->append(47);
    root2->append(3);
    root2->append(5);
  cout<<root1->check(root2);

}
