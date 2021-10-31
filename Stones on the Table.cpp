#include<iostream>
using namespace std;
int main()
{
    int t,a=0;
    char ch[50];
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>ch[i];
    }
    for(int i=0; i<t; i++)
    {
        if(ch[i]==ch[i+1])
            a++;
    }
    cout<<a<<endl;
}
