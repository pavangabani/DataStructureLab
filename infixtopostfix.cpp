#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
    int tos=-1;
    char fs[10];
    public:
    void tp(){tos++;}
    void push(char b)
    {
        try
         {
         ++tos;
         if(tos>10){ throw 0;}
         fs[tos]=b;

        }
        catch(...)
        {
            cout<<"sof";
        }
    }
    char pop()
    {
        try
        {
            if(tos<0) throw 0;
            return(fs[tos--]);
        }
        catch(...)
        {
            return -1;
        }
    }


};
int main()
{
    stack s;
    char input[10];
    char fa[10];
    int j=0;
    cin>>input;
    for(int i=0;i<10;i++)
    {
        if(input[i]!='*'&&input[i]!='+'&&input[i]!='^')
        {
            fa[j]=input[i];
            j++;
        }
        if(input[i]=='*'||input[i]=='+'||input[i]=='^')
        {
           if(s.pop()==-1){s.push(input[i]);continue;}
           if(s.pop()=='+'&&input[i]=='*'){s.tp();s.push(input[i]);continue;}
           if(s.pop()=='+'&&input[i]=='^'){s.tp();s.push(input[i]);continue;}
           if(s.pop()=='*'&&input[i]=='^'){s.tp();s.push(input[i]);continue;}
           if(s.pop()=='*'&&input[i]=='+'){s.tp();fa[j]=s.pop();j++;continue;}
           if(s.pop()=='^'&&input[i]=='*'){s.tp();fa[j]=s.pop();j++;continue;}
           if(s.pop()=='^'&&input[i]=='+'){s.tp();fa[j]=s.pop();j++;continue;}
        }
      /*  if(input[i]=='\0')
        {
            for(int i=0;i<5;i++)
            {
                fa[j]=s.pop();
                j++;
            }
        }*/

    }
    fa[j]=s.pop();
    for(int i=0;i<3;i++)
    {

        cout<<fa[i];
    }
}
