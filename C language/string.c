/*#include<stdio.h>  
void main ()  
{  
    char s[11] = "javatpoint";  
    int i = 0;   
    int count = 0;  
    while(s[i] != '\0')  
    {  
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u' || s[i] == 'o')  
        {  
            count ++;  
        }  
        i++;  
    }  
    printf("The number of vowels %d",count);  
}  */
#include<stdio.h>  
void main ()  
{  
    char s[30];  
    printf("Enter the string? ");  
    scanf("%s",&s); 
    //gets(s) ;
    printf("You entered %s",s);  
}  