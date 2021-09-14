#include <iostream>
using namespace std;

int main() {


    int m,ft,fp;
    int mn=1000;
    cin>>ft>>fp;
    int a[ft],b[ft],c[fp+1];
    for(int i=0;i<ft;i++)
    cin>>a[i];
    for(int i=0;i<ft;i++)
    cin>>b[i];
    for(int i=0;i<fp+1;i++)
     c[i]=0;

    for(int i=0;i<ft;i++){
     m=a[i];
     c[m]=c[m]+b[i];
    }

    for(int i=0;i<fp+1;i++)
        if(mn>c[i]&&c[i]!=0) mn=c[i];

    cout<<mn<<endl;

	return 0;
}
