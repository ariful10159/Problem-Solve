#include<stdio.h>

double triangle(double r,double h)
{
    return 0.5*r*h;
}

int main()
{
    double base ,height;
    printf("enter base and area value: ");
    scanf("%lf %lf",&base,&height);
     
    double area = triangle(base,height);

    printf("Area = %lf",area);

}
