#include<stdio.h>
int main()
{
    int count=1;
    float x,a,y=1;
    scanf("%f %f",&a,&x);

    while(count<=x)
    {   //printf("%d\n",count);
        y=y*a;
        //printf("y=%f\n",y);
        count++;
    }
    printf("%f",y);





}