#include<stdio.h>

int main()
{

    char ch[100];
    gets(ch);
    int l,i,a,b,c,d =0,un;
    l= strlen(ch);
    a=0;
    b=0;

    int check(a)
    {
        for(i=0; i<l; i++)
        {

            if(ch[a] == ch[i]){

                 b++;

            }
        }
        if(b>0){
            l=l-1;
            b=0;
        }
    }

    while(a<=l)
    {
        printf("%d %d\n",a,b);
        c= check(a);

        a++;
    }
    printf("%d\n",l);


}

