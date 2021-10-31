#include<iostream>
using namespace std;
int main()
{
    int t,h,m,l;
    cin>>t;
    while(t!=0)
    {
        cin>>h>>m;
        l=1440-((h*60)+m);
        cout<<l<<endl;
        t--;
    }
}
