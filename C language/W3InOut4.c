#include<stdio.h>
int main()
{  int kmh;
   float mph;
  printf("Input kilometers per hour: ");
  scanf("%d",&kmh);

 // 1 kilometer = 0.62137119 miles.
 mph=kmh*0.62137119;
 printf("Miles per hours=%f",mph);
 return 0;



}