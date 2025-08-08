/*#include <stdio.h>

// Function to reverse the given integer
int numreverse(int n) {
    int reversedNum = 0;

    while (n != 0) {
        int lastDigit = n % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        n /= 10;
    }

    return reversedNum;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int reversedNum = numreverse(num);
    printf("Reversed integer: %d\n", reversedNum);

    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num1,num2,temp,gcd,lcd,n1,n2;
    scanf("%d %d",&num1,&num2);
    n1=num1;
    n2=num2;
    while(num2 !=0)
    {
        temp=num1%num2;
        num1=num2;
        num2=temp;

    }
    gcd=num1;
    lcd=(n1*n2)/gcd;
    
    printf("%d\n",gcd);
    printf("%d\n",lcd);
    
}*/
#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    scanf("%d",&n);
    temp==n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("%d",sum);
}