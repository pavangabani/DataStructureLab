#include<iostream>
using namespace std;
bsort(int *a)
{
    int temp;
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<10-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;

            }
        }
    }
      for(int i=0;i<10;i++)
    {

        cout<<a[i]<<endl;
    }

}

ssort(int *a)
{
    int m=0;
    int temp;
    for(int i=0;i<9;i++)
    {
        m=i;
        for(int j=i+1;j<10;j++)
          if(a[j]<a[i]) m=j;
        temp=a[m];
        a[m]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<10;i++)
    {

        cout<<a[i]<<endl;
    }
}
isort(int *a)
{
    int j,key;
    for(int i=1;i<10;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&key<a[j])
        {
          a[j+1]=a[j];
          j--;
        }
        a[j+1]=key;

    }
  for(int i=0;i<10;i++)
    {

        cout<<a[i]<<endl;
    }

}
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1};
    ssort(a);
    isort(a);
    bsort(a);
}
