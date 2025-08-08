/*#include<stdio.h>
int main()
{
 char a[101];
 int b,c,i,j;
 scanf("%s",&a);
 for(i=97;i<=122;i++){
    for(j=0;a[j]!=0;j++){
        if(a[j]==i){
            b++;
            break;
        }
    }
 }
 if(b%2==0){
 printf("CHAT WITH HER!");}
 else{ printf("IGNORE HIM!");}
}*/


#include<stdio.h>  
int even_odd(int);  
void main()  
{  
 int n,flag=0;  
 printf("\nGoing to check whether a number is even or odd");  
 printf("\nEnter the number: ");  
 scanf("%d",&n);  
 flag = even_odd(n);  
 if(even_odd(n) == 2)  
 {  
    printf("\nThe number is odd");  
 }  
 else   
 {  
    printf("\nThe number is even");  
 }  
}  
int even_odd(int n)  
{  
    if(n%2 == 0)  
    {  
        return 5;  
    }  
    else   
    {  
        return 2;  
    }  
}