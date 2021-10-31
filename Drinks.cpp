#include<iostream>
using namespace std;
int main()
{
    double  a,b,c,d;
    int t,n;
    cin>>t;
    n=t;
    b=0.0;
    while(t!=0)
    {
        cin>>a;
        b+=a;
        t--;
    }
    c=b/100.0;
    d=(c/n)*100.0;
    cout<<d<<endl;
}
