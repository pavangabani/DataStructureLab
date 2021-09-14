#include<iostream>
#include<string.h>

using namespace std;
    char a[1000];
    int i,j,x=0,y=0,s,t;
int main()
{
    cin>>t;
    for( j=0;j<t;j++)
    {
    cin>>s;
    cin>>a;
    a[s]='p';
    for( i=0;i<=s;i++)
    {
        if(a[i]=='L'&&a[i+1]!='L')
            x=x-1;
        if(a[i]=='R'&&a[i+1]!='R')
            x=x+1;
        if(a[i]=='U'&&a[i+1]!='U')
            y=y+1;
        if(a[i]=='D'&&a[i+1]!='D')
            y=y-1;
        if(a[i]=='L'&&a[i+1]=='R')
            x=x-1;
        if(a[i]=='R'&&a[i+1]=='L')
            x=x+1;
        if(a[i]=='U'&&a[i+1]=='D')
            y=y+1;
        if(a[i]=='D'&&a[i+1]=='U')
            y=y-1;

 //cout<<x<<" "<<y<<endl;
    }

    cout<<x<<" "<<y<<endl;
    }




}
