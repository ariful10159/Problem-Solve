#include<stdio.h>
int main()
{    
    int a,b,c,d,e;
    scanf("%d",&a);

    if(a>0)
    printf("%d",a);

    if(a<0)
    {
        b=a%10;
        d=a/10;
        c=d%10;
        e=c/10;
        if(b>c || b==0)
         {printf("%d",d);}
        else
         printf("%d",e);


    }

 
}