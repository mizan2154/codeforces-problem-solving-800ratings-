#include<iostream>
using namespace std;
int main()
{
    int t,a,b,c,d;
    cin>>t;
    d=0;
    while(t!=0)
    {
        cin>>a>>b>>c;
        if (a+b+c >=2)
        d++;
        t--;

    }
    cout<<d<<endl;
    return 0;
}
