#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,result;
    printf("Enter x and y value: ");
    scanf("%lf %lf",&x,&y);
    result= pow(x,y);
    printf("result=%lf",result);
    return 0;
}