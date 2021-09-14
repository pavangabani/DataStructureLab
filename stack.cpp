#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
    int tos=-1;
    int a[1];
    public:

    void push(int b)
    {
        try
         {
         ++tos;
         if(tos>1) throw 0;
         a[tos]=b;

        }
        catch(...)
        {
            cout<<"sof";
        }
    }
    int pop()
    {
        try
        {
        if(tos<0) throw 0;
        return(a[tos--]);
        }
        catch(...)
        {
            cout<<"sdf";
          return (-1);
        }
    }


};
int main()
{
    stack s;

   if(s.pop()==-1){cout<<"pavan";}



}


