#include<stdio.h>
int main()
{
  float Fah,Cen;
  printf("Enter the number of Centegrade temperature: ");
  scanf("%f",&Cen);
  Fah=(Cen*9/5)+32;
  printf("Fahernheit temperature: %f",Fah);
  return 0;


}