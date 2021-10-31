#include<stdio.h>
int main()
{
    long long int i,n,a,b,c,d,e,f;
    scanf("%lld",&n);
    while(n!=0)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a==b && b==c)
        {
            d=1;
            e=1;
            f=1;
        }
        else if(a==b)
        {
            if(a>c)
            {
                d=1;
                e=1;
                f=1+a-c;
            }
            else{
                d=1+c-a;
                e=1+c-a;
                f=0;
            }
        }
        else if(a==c)
        {
            if(b>c)
            {
                d=1+b-a;
                e=0;
                f=1+b-c;
            }
            else{
                d=1;
                e=1+a-b;
                f=1;
            }
        }
        else if(b==c)
        {
            if(a>c)
            {
                d=0;
                e=1+a-b;
                f=1+a-c;
            }
            else{
                d=1+b-a;
                e=1;
                f=1;
            }
        }
        else
        {
            if(a>b && a>c)
            {
                d=a-a;
                e=1+a-b;
                f=1+a-c;
            }
            if(a<b && b>c)
            {
                d=1+b-a;
                e=b-b;
                f=1+b-c;
            }
            if(c>a && c>b)
            {
                d=1+c-a;
                e=1+c-b;
                f=c-c;
            }

        }
        printf("%lld %lld %lld\n",d,e,f);
        n--;
    }
    return 0;
}
