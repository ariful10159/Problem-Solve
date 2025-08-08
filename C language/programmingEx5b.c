#include<stdio.h>
#include<math.h>
int main()
{
  float x,y,a,b,c;
  printf("Enter x and y value: ");
  scanf("%f %f",&x,&y);
  a=(x+y)/(x-y);
  b=(x+y)/2;
  c=x+y*x-y ;
  printf("a=%f\n b=%f\n c=%f\n",a,b,c);
}

