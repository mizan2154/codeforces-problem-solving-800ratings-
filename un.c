#include<stdio.h>
int main()
{

    int i,j,a,b,c,d,l,n;
    char ch1[100],ch2[100];
    gets(ch1);
    l=strlen(ch1);
    for(i=0; i<l; i++)
    {

        for(j=i+1; j<l; j++)
        {
            if(ch1[i]==ch1[j])
            {
                ch2[c]=ch1[j];
                b++;
            }
        }
        if(b>0)
        {
            c++;
            b=0;
        }
    }
    d=strlen(ch2);
    n=l-d;
    if(n%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
        printf("IGNORE HIM!\n");



}
