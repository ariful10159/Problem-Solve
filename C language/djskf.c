/*#include <stdio.h>
int main()
{
    int sum=0,i=1;
    while(i<=20)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("sum of even number = %d",sum);
}*/
#include <stdio.h>
int main()
{
    int a = 5, b = 6;
    char c = 71;
    b ^= a;
    printf("b=%d\n", b);
    printf("a=%d\n", a);
    a &= 4;
    printf("a=%d\n", a);
    printf("c=%c\n", c);
    float d = (float)a / b;
    printf("%f", d);
    return 0;
}