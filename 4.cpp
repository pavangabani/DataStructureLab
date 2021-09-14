#include<iostream>
using namespace std;
int main()
{
    int a,b,x=0,y,k=1;
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
            y=3;
            x=k;
            k++;

     for(int j=0;j<3-i;j++){
         arr[x][y]=no1;
            y--;
            x++;
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
