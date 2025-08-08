/*#include<stdio.h>
#include<string.h>
int main()
{
    char ch[200];
    int j;
    scanf("%s",&ch);
    for(j=0;j<strlen(ch);j++)
    {
        if(ch[j]=='.')
        {
            printf("0");
        }
        else if(ch[j]=='-' && ch[j+1]=='.')
        {
            printf("1");
            j++;
        }
        else if(ch[j]=='-' && ch[j+1]=='-')
        {
            printf("2");
            j++;

        }
    }
}*/
/*#include <stdio.h>
#include <string.h>
int main()
{
    int i, n, d = 0, count = 0;
    char s[1000];
    char a1[10] = "++x";
    char a2[10] = "x++";
    char a3[10] = "x--";
    char a4[10] = "--x";

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &s);

        if (strcmp(s,a1 ) == 0)
        {
            //printf("+++x\n");
            count++;
            continue;
        }
        else if (strcmp(s, a2) == 0)
        {
            count++;
            continue;
            //printf("x+++\n");
        }
        else if (strcmp(s,a3) == 0)
        {
            count--;
            continue;
            //printf("x---\n");
        }
        else
        {

            count--;
            //printf("---x\n");
        }
    }

    printf("%d", count);
}*/
#include <stdio.h>
void display(int result)
{
    printf("%d", result);
}
void add(int x, int y)
{
    int z = x + y;
    display(z);
}
void subtract(int x, int y)
{
    int z = x - y;
    display(z);
}
void multiply(int x, int y)
{
    int z = x * y;
    display(z);
}
void division(int x, int y)
{
    int z = x / y;
    display(z);
}
void remind(int x, int y)
{
    int z;
    if (x > y)
    {
        z = x % y;
    }
    else
    {
        z = y % x;
    }
    display(z);
}
void equation()
{
    int a, n, b;
    scanf("%d %d ", &a, &b);
    printf("enter your choice\n");
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division\n");
    printf("5 for remainder\n");
    scanf("%d", &n);
    if (n == 1)
    {
        add(a, b);
    }
    if (n == 2)
    {
        subtract(a, b);
    }
    if (n == 3)
    {
        multiply(a, b);
    }
    if (n == 4)
    {
        division(a, b);
    }
    if (n == 5)
    {
        remind(a, b);
    }
    //return 0;
}
int main()
{

   
    equation();
}