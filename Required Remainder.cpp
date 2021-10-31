#include<iostream>
using namespace std;

int main()
{
    long long int t,x,y,n,a,b,c,d;
    cin>>t;

    while(t!=0)
    {
        cin>>x>>y>>n;
        a=n%x;
        c=n/x;
        if(a==y)
        {
            b=n;
        }
        else
        {
            b=(c*x)+y;


            if(b>n)
            {
                b=((c-1)*x)+y;
            }

        }

        t--;
        cout<<b<<endl;
        a=0;
        b=0;
        c=0;
    }
    return 0;
}
