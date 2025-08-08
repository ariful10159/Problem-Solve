#include<stdio.h>
#include<string.h>
int main()
{
  int n,i,count=0,x;
  char ch[50];
  scanf("%d",&n);
  scanf("%s",&ch);
  x=strlen(ch);
  for(i=0;i<x;i++)
   {
    if(ch[i]==ch[i+1])
    count++;
   }
   printf("%d",count);
}