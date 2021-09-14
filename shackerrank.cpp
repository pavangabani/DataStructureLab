#include<iostream>
#include<string>
using namespace std;
int main()
{
  long int n,m,ma;
  cin>>n>>m;
  long int a[n+1];
  for(int i=0;i<n+1;i++)
    a[i]=0;
  long int b[m][3];
  for(int i=0;i<m;i++){
    cin>>b[i][0]>>b[i][1]>>b[i][2];
}
  for(int j=0;j<m;j++)
  for(int i=b[j][0];i<=b[j][1];i++)
    a[i+1]=a[i+1]+b[j][2];


  ma=a[0];
  for(int i=0;i<n+1;i++)
   if(ma<a[i])
    ma=a[i];
  cout<<ma;

}

