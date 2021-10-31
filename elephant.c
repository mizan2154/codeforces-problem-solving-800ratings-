#include<stdio.h>
int main(){
    long long int s,n,a,b;
    scanf("%lld",&n);
    if(n%5==0){
        s=n/5;
    }
    else
    {
        s=(n/5)+1;
    }

    printf("%lld\n",s);
}
