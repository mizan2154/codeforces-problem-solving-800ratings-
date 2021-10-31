#include<stdio.h>
int main()
{

    long long int a,b,c,d,x,y,z;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if( a>b && a>c && a>d)
    {
        x=a-b;
        y=a-c;
        z=a-d;
    }
    else if( b>a && b>c && b>d)
    {
        x=b-a;
        y=b-c;
        z=b-d;
    }
    else if( c>b && a<c && c>d)
    {
        x=c-a;
        y=c-b;
        z=c-d;

    }

    else if( d>b && d>c && d>a)
    {
        x=d-a;
        y=d-b;
        z=d-c;
    }
    printf("%lld %lld %lld",x,y,z);
    return 0;
}
