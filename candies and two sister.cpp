#include<iostream>
using namespace std;

int main()
{
    long long int t,n,w;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        if(n<=2)
        {
            w=0;
        }
        else if(n%2!=0)
        {
            w=n/2;
        }
        else
        {
            w=(n/2)-1;
        }
        cout<<w<<endl;
        t--;
    }
    return 0;
}

