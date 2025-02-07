#include<stdio.h>
int main()
{
int m;
float x,sum,average;
printf("This program computes the average of a set of numbers\n");\
printf("Enter value one after another\n");
printf("Enter a negative number at the end.\n\n");
sum=0;
for(m=1;m<=1000;m++)
{
    scanf("%f",&x);
if(x < 0)
      break ;
   sum=sum+x;
}
average=sum/(float)(m-1);
printf("\n\n");
printf("the number of value =%d\n",m-1);
printf("Sum                 =%f\n ",sum);
printf("Average           =%f\n",average);


} 
