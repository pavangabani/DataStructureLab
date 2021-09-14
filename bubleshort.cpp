#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
    int tos=-1,j=0;
    char fs[2],fa[5];
    public:
    void top(){++tos;}
    void push(char b)
    {
        try
         {
         ++tos;
         if(tos>2) throw 0;
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
    void convert(char *input)
    {

         for(int i=0;i<5;i++)
        {
        if(input[i]!='*'&&input[i]!='+'&&input[i]!='^'&&input[i]!='e')
        {
            fa[j]=input[i];
            j++;
        }
        if(input[i]=='*'&&input[i]=='+')
        {
           if(pop()==-1){push(input[i]);continue;}
           if(pop()=='+'&&input[i]=='*'){top();push(input[i]);continue;}
           if(pop()=='*'&&input[i]=='+'){top(); fa[j]=pop();j++;push(input[i]);continue;}

        }


        }
    }
     void display()
    {
       for(int i=0;i<2;i++)
        cout<<fs[i];
    }


};
int main()
{
    stack s;
    char input[5];
    cin>>input;
    s.convert(input);
    s.display();







}
