/*#include<stdio.h>
double countable(double x,double y)


 { double  result=1,i;
   { for(i=1;i<=y;i++)
    result=result*x;
    printf("Total value=%.1lf",result);
    return 0;}
    }

void main()
{
   double x,y;
   printf("Enter x,y value: ");
   scanf("%lf %lf",&x,&y);

    countable(x,y);
}*/
#include<stdio.h>
int main()
{
    int n,k,c=0,a;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>=k)
        {
            c++;
        }
    }
    printf("%d",c);
}