#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int a,b,c,n,t,r,x,y;
    cin>>t;
    while(t!=0)
    {
        cin>>a>>b>>c>>n;
        r=a+b+c+n;
        if(r%3==0)
        {
            x=r/3;
            y=abs(x-a)+abs(x-b)+abs(x-c);
            if(y==n)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        else
        {
            cout<<"NO"<<endl;
        }
        t--;

    }
    return 0;
}
