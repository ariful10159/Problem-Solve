#include<stdio.h>
int main()
{
    int a,count=0;
    scanf("%d",&a);
    
    while(a>0)
    {
        if(a%2==0)
        {
           a=a/2;
        }
        else
        {a=a-1;
        count++;}
    }
    printf("%d",count);
}