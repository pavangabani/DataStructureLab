#include<iostream>
using namespace std;
int main()
{
    int l,r,t;
    cin>>t;
    int c[t];
    for(int i=0;i<t;i++)
    c[i]=0;

    for(int j=0;j<t;j++)
    {
        cin>>c[j];
        r=c[j]%10;
        while(c[j]>10) c[j]/=10;
        c[j]=r+c[j];
    }

     for(int j=0;j<t;j++)
       cout<<c[j]<<endl;


}

