#include<stdio.h>
int main()
{

    int i,j,l,a,b=0,c=0,un;
    char ch1[120],ch2[130];
    gets(ch1);
    l=strlen(ch1);
    for(i=0; i<l; i++)
    {
        for(j=i+1; j<l; j++)
        {
            if(ch1[i]!=ch1[j])
            {
                ch2[c] = ch1[j];
                b++;
            }
        }
        if(b>0)
        {
            c++;
            b=0;
        }
    }
    a=strlen(ch2);
    puts(ch1);
    puts(ch2);
    printf("%d%d\n",l,a);
    un=l-a;
    if(un%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
        printf("IGNORE HIM!\n");


    return 0;

}
