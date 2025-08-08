#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,n,c;
    char a[]={"yes"};
    char b[]={"YES"};
    scanf("%d",&n);
    while(i<n)
    {
       scanf("%s",&a);
       strupr(a);
       
       c=strcmp(a,b);
       if(c==0)
       printf("YES");
       else
       printf("NO");
       printf("\n");
       i++;


    }

}