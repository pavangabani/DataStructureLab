#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y,k=3;
    int no=10;
    int no1=11;
    int arr[4][4];
    for(int i=0;i<4;i++)
    {
        a=3-i;
        b=0;

        for(int j=0;j<4-i;j++)
        {
            arr[a][b]=no;
            a--;
            b++;
            no--;
        }
    }
     for(int i=0;i<3;i++){
            x=3;
            if(i==1)k=2;
             if(i==2)k=1;
            y=k;

     for(int j=0;j<3-i;j++){
         arr[x][y]=no1;
            x--;
            y++;
            no1++;
    }
    }

    for(int i=0;i<4;i++)
    {
         for(int j=0;j<4;j++)
         {
          cout<<arr[i][j]<<"\t";
         }
             cout<<""<<endl;
    }

}
