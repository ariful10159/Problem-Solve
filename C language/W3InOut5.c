#include<stdio.h>
int main()
{
  int hours,min,Total_minutes;
  printf("Input Hours: ");
  scanf("%d",&hours);
  printf("input minutes : ");
  scanf("%d",&min);
  Total_minutes=(hours*60)+min;
  printf("Total minutes = %d",Total_minutes);


}