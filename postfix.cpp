#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
    int tos=-1;
    int fi[5];
    public:
    void push(char a)
    {
        fi[++tos]=a;
    }
    int pop()
    {
        return(fi[tos--]);
    }
    void dp(){
    cout<<fi[0];
    }

};
int main()
{
    stack s;
    char input[10];
    cin>>input;
    char *d;
    int f,a,b;
    d=new char[1];

    for(int i=0;i<10;i++)
    {
        if(input[i]!='*'&&input[i]!='+')
        {
           d[0]=input[i];
           f=atoi(d);
           s.push(f);
            continue;
        }
        else if(input[i]=='*')
        {
            a=s.pop();
            b=s.pop();
            s.push(a*b);
            continue;

        }
        else if(input[i]=='+')
        {
            a=s.pop();
            b=s.pop();
            s.push(a+b);
            continue;
        }
    }
    s.dp();

}


