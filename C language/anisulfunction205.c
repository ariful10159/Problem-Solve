#include<stdio.h>
int c[101];
int main()

{
    int i,x,min_num,result,num;
    printf("What is the number of integers you wish to input? ");
  scanf("%d",&num);
  printf("Input the number(s):\n");
   min_num = 100;
   for(i=1;i<=100;i++) 
    {
        if(c[i]>0 && c[i]<min_num)
        {
            result =i;
            min_num=c[i];
        }
    }
    printf("Smallest among the said integers: %d",result);
}