#include<iostream>
using namespace std;
int main()
{
    int t,a=0;
    string s;
    cin>>t;
    while(t!=0)
    {
        cin>>s;
        if(s[0] =='+' || s[2] =='+')
            a++;
        else
            a--;
        t--;
    }
    cout<<a<<endl;

}
