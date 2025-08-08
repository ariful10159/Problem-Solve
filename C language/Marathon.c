/*#include<stdio.h>
int main()
{
    int i,n,a[10000],b[10000],c[10000],d[10000];
    int count=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&a[i],&b[i],&c[i],&d[i]);

    }

    for(i=0;i<n;i++)
    {
        if(b[i]>a[i])
        count++;
        if(c[i]>a[i])
        count++;
        if(d[i]>a[i])
        count++;
    }

}*/
#include<stdio.h>
 
int main()
{
    int a,b,c,e,i,n,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=0;
        scanf("%d %d %d %d",&a,&b,&c,&e);
        if(b>a)
        {
            d+=1;
        }
        if(c>a)
        {
            d+=1;
        }
        if(e>a)
          {
            d+=1;
          }
 
        
        printf("%d\n",d);
    }
}
