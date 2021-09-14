#include<iostream>
#include <cstdlib>
using namespace std;
class q
{
    int r[5],k=0;
    string a[5][10];
public:
    q()
    {
        for(int i=0;i<10;i++)
            r[i]=0;
    }
    void push(string x,int y)
    {
        a[y][(r[y]++)]=x;
    }
    string pop()
    {
        while(r[k]==0) k++;
            return (a[k][(--r[k])]);
    }

     void display()
     {
      for(int i=0;i<5;i++)
      {
        for(int j=0;j<10;j++)
          cout<<a[i][j]<<"\t";
          cout<<"\n";
      }
     }

};
int main()
{
    q q1;
    q1.push("pavan",1);
    q1.push("mautik",1);
    q1.push("avi",4);
    q1.push("rutvik",2);
    q1.push("rutvik",2);
    q1.push("jaydeep",3);


    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;




}
