/*#include<stdio.h>
int main()
{
    int y,n,a,b,c,d,n1,n2,n3,n4,x,temp;
    scanf("%d",&y);
    //printf("%d\n",y);
    n=y;
    n=n+1;
    //printf("\t%d\n",n);
 
    while(n<=9100)
    {
     n1=n%10;
     //printf("%d\n",n1);
     a=n/10;
      //printf("%d\n",a);
     n2=a%10;
      //printf("%d\n",n2);
     b=a/10;
      //printf("%d\n",b);
     n3=b%10;
      //printf("%d\n",n3);
     c=b/10;
      //printf("%d\n",c);
     n4=c%10;
      //printf("%d\n",n4);
      if(n1!=n2 && n1 !=n3 && n1!=n4 && n2!=n3 && n2!=n4 && n3!=n4)
      {
        break;
      }
      n++;
    }
    printf("%d",n);

       
    
}*/
     #include<stdio.h>
    int main()
    {
        int n,c=0;
        char x[4];
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%s",&x);
            
            if(x[2]=='+')
            c++;
            else if(x[2]=='-')
            c--;
        }
        printf("%d\n",c);
        printf("%s",x);
    }