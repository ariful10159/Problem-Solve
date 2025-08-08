#include<stdio.h>
int main()
{
    double n, p, s=0;
    scanf("%lf", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &p);
        printf("%lf\n",p);
        //s+=p/100;
    }
    
    printf("%lf\n", (s/n)*100);
}
