#include<stdio.h>
int main()
{
    double a,b,c,d,n;
    int t;
    scanf("%d",&t);
    n=t*1.0;
    b=0.0;
    while(t!=0)
    {
        scanf("%lf",&a);
        b+=a;
        t--;
    }
    c=b/100.0;
    d=(c/n)*100.0;
    printf("%.12lf\n",d);
    return 0;
}
