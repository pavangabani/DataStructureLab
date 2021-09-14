#include<iostream>
using namespace std;
class stack
{
    int tos=-1;
    char ary[5];
    public:
    void push(char a)
    {
        ary[++tos]=a;
    }
    int pop()
    {
        return(ary[tos--]);
    }

};
int main()
{
    char b[5];
    stack s;
    s.push('p');
    s.push('a');
    s.push('v');
    s.push('a');
    s.push('n');

    b[0]=s.pop();
    b[1]=s.pop();
    b[2]=s.pop();
    b[3]=s.pop();
    b[4]=s.pop();

    for(int i=0;i<5;i++)

    {

        cout<<b[i];
    }
}
