#include<stdio.h>
int main()
{

    long long int t, a,b,x,y,z;
    scanf("%lld",&t);
    while(t!=0)
    {
        scanf("%lld %lld",&a,&b);
        if(a<b)
        {
            x=b-a;
        }
        else if(a%b==0)
        {
            x=0;
        }
        else
        {
            y=a%b;
            x=b-y;
        }
        printf("%lld\n",x);
        t--;
    }

}
