#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long int i,c=0,d=0,l;
    l=s.length();
    for(i=0; i<l; i++)
    {
        if(s[i]=='7' || s[i]=='4')
            c++;

    }
    if(c==7 || c==4)
    {
         cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;

    }




    return 0;
}
