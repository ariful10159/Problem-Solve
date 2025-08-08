/*#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);

    if(a>0)
    printf("%d",a);

    if(a<0)
    {
    b=a%10;
    //7
    c=a/10;//-10000 big
    d=(c+b);//-10003 small
    if(c>d)
    printf("%d",c);
    else if(c==d)
    printf("0");
    else
    printf("%d",d);}
   
    return 0;*/

#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=0,i,x;
    char ch[500];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&ch);
        x=strlen(ch);
        //printf("%d\n",x);
        if(x<=10)
         {
            printf("%s\n",ch);
         }
        if(x>10)
         {
            
            printf("%c%d%c\n",ch[0],x-2,ch[x-1]);
         }
    }
}