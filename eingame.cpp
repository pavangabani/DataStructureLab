#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int c=0,m,r;
    int FactorCount = 0;
    scanf("%d",&m);
    int a[m];
    for(int i=0;i<m;i++)
    scanf ("%d",&a[i]);

    for(int i=0;i<m;i++)
    {
        while(a[i]!=1)
        {
            if(a[i]==2) {a[i]=a[i]-1;c++;continue;}
            for (int i=m-1; i>=2; --i){
                for (int j=2; j<i; ++j)
                    if (i % j == 0){++FactorCount;continue; }
            if (FactorCount == 0){r=i;break;}
            FactorCount = 0;}


               a[i]=a[i]-r;

               c++;
        }

    if(c%2==0) cout<<"ALICE"<<endl;
    else cout<<"BOB"<<endl;

    }

}
