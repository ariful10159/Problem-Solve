#include<stdio.h>
int main()
{  char s[60];
unsigned long int ul;
printf("Enput an string : ");
scanf("%s",&s);

ul=strtoul(s,NULL,10);
printf("Convert to unsigned long int=%lu",ul);
return 0;

  



}
