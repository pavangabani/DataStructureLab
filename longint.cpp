#include<iostream>
#include<cstring>
#include<string>
#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
class node
{
    int info;
    node *next;
    node *pre;
public:
    node()
    {
        next=NULL;
        pre=NULL;
    }
    node(int a)
    {
         info=a;
         next=NULL;
         pre=NULL;
    }
    void append(node *nn)
    {

        node *tp=this;
        while(tp->next!=NULL)
        {
            tp=tp->next;
        }
        tp->next=nn;
        nn->pre=tp;

    }
    void travers(void)
    {
      node *tp=this;
      node *tp1=this;
      while(tp!=NULL)
      {
          //cout<<tp->info;
          tp=tp->next;
      }
      while(tp1->next!=NULL)
        tp1=tp1->next;
      while(tp1->pre!=NULL)
      {

          cout<<tp1->info;
          tp1=tp1->pre;
      }
    }
    void add(node *n)
    {  node *f=new node(0);
       node *tp=this;
       node *tp1=n;
      while(tp1->next!=NULL)
        tp1=tp1->next;
      while(tp->next!=NULL)
        tp=tp->next;
      while(tp!=NULL)
      {

       int x=tp->info+tp1->info;
       if(x/10==1)
       {
            node *n1=new node(x%10);
            f->append(n1);
            if(tp->pre==NULL)
                {
                    node *n1 =new node(1);
                    f->append(n1);
                }
            else
                tp->pre->info=tp->pre->info+1;
        }
       else
       {
       node *n=new node(x);
       f->append(n);
       }

       tp=tp->pre;
       tp1=tp1->pre;

      }

      cout<<"ADD :";
      f->travers();
    }

};
int main()
{   string a,b;
    cin>>a>>b;
    if(a.size()>b.size())
    {
        reverse(b.begin(),b.end());
        while(a.size()!=b.size())
         b.push_back('0');
        reverse(b.begin(),b.end());
    }
    else
    {
     reverse(a.begin(),a.end());
     while(a.size()!=b.size())
         a.push_back('0');
     reverse(a.begin(),a.end());
    }
    cout<<"NO1 :"<<a<<"\n"<<"NO2 :"<<b<<endl;

    char *p=new char[1];
    p[0]=a[0];
    node *fn=new node(atoi(p));
    p[0]=b[0];
    node *sn=new node(atoi(p));

    int x=a.size()-1;
    int y=b.size()-1;
    int z=1;
    while(x!=0)
    {
        p[0]=a[z];
        node *n=new node(atoi(p));
        fn->append(n);
        x--;
        z++;
    }
    z=1;
    while(y!=0)
    {
        p[0]=b[z];
        node *n=new node(atoi(p));
        sn->append(n);
        y--;
        z++;
    }
    fn->add(sn);


}
