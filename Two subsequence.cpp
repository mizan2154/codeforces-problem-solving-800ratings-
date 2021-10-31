#include<iostream>
using namespace std;
int main()
{
    int i,t,l,l1;
    string s,s1,s2;
    cin>>t;
    while(t!=0)
    {
        cin>>s;
        cout<<s<<endl;
        l=s.length();
        cout<<l<<endl;
        for(i=0; i<l-1; i++)
        {

            if(s[i]<s[i+1])
            {
                s2[0]=s[i];
                s1[i]=s[i+1];
            }
            else
            {
                s2[0]=s[i+1];
                s1[i]=s[i];
            }

        }
         cout<<s2<<endl;
          cout<<s1<<endl;



        t--;
    }
}
