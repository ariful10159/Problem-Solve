#include<stdio.h>
int main()
{
    int x=5;
    int y=10;
    int *p=&x;
    printf("value of x= %d \n",x);
    printf("Address of x= %d\n",&x);
    printf("Address of p= %d \n",p);
    printf("Contant  of p= %d \n",*p)  ;
}