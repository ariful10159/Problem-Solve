#include <stdio.h>
#include <math.h>
int main()
{
  int count, negative;
  double number, sqroot;
  printf("Enter 9999 to stop.");
  count = 0;
  negative = 0;
  while (count <= 100)
  {
    printf("Enter a number .");
    scanf("%lf", &number);
    if (number == 9999)
      break;
    if (number < 0)
    {
      printf("Number is negative\n\n");
      negative++;
      continue;
    }
    sqroot = sqrt(number);
    printf("number   =%lf", number);
    printf("Squart root=%lf", sqroot);
    count++;
  }
  printf("Number of items done = %d\n", count);
  printf("\nNegative items = %d\n", negative);
  printf("END OF DATA.");
}