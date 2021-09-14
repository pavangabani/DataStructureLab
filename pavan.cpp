#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int a,m1,m2,s=0;
    cin>>a;
    int b[a];

    for(int i=0;i<a;i++)
    {
        cin>>b[i];
    }
    m1=b[0];
    for(int i=0;i<a;i++)
    {
        if(m1<b[i]){
           m1=b[i];
            s=i;
        }

    }
    cout<<s;


}
