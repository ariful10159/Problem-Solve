#include<stdio.h>
#include<math.h>
int main()
{
   long double m,n,a,x,y,z,d;
   int  number;
    scanf("%llf %llf %llf",&m,&n,&a);
    x=m/a;
    y=n/a;
    z=ceil(x);
    d=ceil(y);
    number=z*d;
    printf("%d",number);

}