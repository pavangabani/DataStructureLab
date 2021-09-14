
#include <iostream>
#include<cmath>
using namespace std;
int d1(long long int n)
{
    int m=0;
    // Size of an integer is assumed to be 32 bits
    for (int i =40; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
           m++; }
    return m;
}
int d(long long int n)
{
    int m=0;
    // Size of an integer is assumed to be 32 bits
    for (int i =40; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
           m=i; }
    return m;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int x,y,l,r,c;

	    cin>>x>>y>>l>>r;
	    c=(x|y);

	    if(x==0 || y==0 || r==0)
	      cout<<"0"<<endl;

	    else if(l<=c && c<=r)
	       cout<<(x|y)<<endl;

	    else
	    {

	        while((x|y)>r)
	        {
	        if(y>=x && d1(y)>1)
	        {
	          y=y-pow(2,d(y));

	        }
	        else
	          x=x-pow(2,d(x));
	        cout<<x<<" "<<y<<" "<<(x|y)<<endl;
	        }

	    cout<<(x|y)<<endl;



	    }




	}
}
