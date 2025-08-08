#include<stdio.h>
int main()
{
   int min,hours;
   printf("Input Minutes: ");
   scanf("%d",&min);
   hours=min/60;
   min=min%60;
   printf("%d Hours and %d Minutes",hours,min);
   return ;




}