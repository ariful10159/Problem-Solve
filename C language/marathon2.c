#include<stdio.h>
int main()
{
    int a,b,c,d,sum=0,i,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        
        scanf("%d %d %d %d",&a,&b,&c,&d);
        sum=0;
        if(b>a)
        sum++;
        if(c>a)
        sum++;
        if(d>a)
        sum++;

        printf("%d\n",sum);

    }
}
