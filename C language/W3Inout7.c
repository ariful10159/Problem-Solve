#include<stdio.h>
int main()
{
 char firstname[30],lastname[20];
 int bir_year;
 printf("Input your first name: ");
 scanf("%s",&firstname);
 printf("Enter your last name: ");
 scanf("%s",&lastname);
 printf("Input your birthday: ");
 scanf("%d",&bir_year);
 printf("%s %s %d\n",firstname,lastname,bir_year);



}