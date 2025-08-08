/*#include<stdio.h>
int main()
{
    int x,num,count=0,temp;
    scanf("%d",&x);
    temp=x;

    while(temp!=0)
    {
       num=temp%10;
       temp=temp/10;
       count=(count*10)+num;



    }
    printf("%d",count);

}*/
/*#include <stdio.h>
int main() {
  int i, j, rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  for (i = 1; i <= rows; ++i) {
     for (j = 1; j <= i; ++j) {
        printf("%d ", j);
     }
     printf("\n");
  }
  return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int count=0;
    int a,b,temp,i;
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        a=a*3;
        //printf("%d\n",a);
        b=b*2;
        //printf("%d\n",b);
        count=count + 1;
        if(a>b )
        {
            break;
        }

    }
    printf("%d",count);
}*/
/*#include<stdio.h>
int main()
{
    int x=0,y=0,z=0,n;
    int i,j,a[100],b[100],c[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(j=0;j<n;j++)
    {
        //printf("%d\n",a[j]);
    x+=a[j];
    //printf("%d\n",b[j]);
    //printf("%d\n",x);
    y=y+b[j];
    //printf("%d\n",c[j]);
    z=z+c[j];
    }
    //printf("%d\n",x);
    // printf("%d\n",y);
    // printf("%d\n",z);

    if(x==0 && y==0 && z==0)
    {
        printf("YES");
    }
    else
    printf("NO");
}*/
/*#include<stdio.h>
int fact(int n);
int main()

{   printf("yyyyy\n");
    int result = fact(5);
    printf("factorial of 5 = %d",result);
}
int fact(int n)
{   printf("xxxx\n");
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
*/
/*#include<stdio.h>
int main()
{
    int i,x,j,k,l;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
    printf("\n");
    }
    for(k=x-1;k>=1;k--)
    {
        for(l=1;l<=k;l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}*/
/*#include<stdio.h>
int main()
{
    int i,j,x,y,l,m;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",);
        }
        printf("\n");
    }
    for(l=x-1;l>=1;l--)
    {
        for(m=1;m<=l;m++)
       {
        printf("%d ",m);
        }
        printf("\n");
    }
}*/
/*#include<stdio.h>
int main()
{
    int i,j,k,l;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");

    }
}*/
/*#include<stdio.h>
int main()
{
    int i,j,k,l,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
    for(k=n-1;k>=1;k--)
    {
        for(l=1;l<=n-k;l++)
        {
            printf(" ");
        }
        for(l=1;l<=k;l++)
        {
            printf("%d",l);
        }
        printf("\n");
    }
}*/
/*#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }

}*/
/*#include<stdio.h>
int main()
{
    int i,j,n,k,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j*i);
        }
        printf("\n");
    }


}*/
/*#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
           printf(" ");
        }
        for(j=1;j<=i;j++)
        {
           printf("%d ",j);
        }
        printf("\n");

    }
}*/
/*#include<stdio.h>
int main()
{
    int i,j,n,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=n-1;k>=1;k--)
    {
        for(l=1;l<=n-k;l++)
        {
            printf(" ");
        }
        for(l=1;l<=2*k-1;l++)
        {
            printf("*");
        }
        printf("\n");
    }
}*/
/*#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if( i==j )
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}*/
/*#include<stdio.h>
int ariful(int k,int l)
{
    int total;
    total=k+l;
    return total;

}
int main()
{
    int sum,x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    sum = ariful(x,y);
    printf("%d",sum);
}*/
// Prime number
/*#include<stdio.h>
int main()
{
    int num,count=0;
    int i;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("prime number");

    }
    else
    printf("not prime number");

}
*/
// write a program deterine prime number using function

/*#include<stdio.h>


int checkprimenumber(int x)
{
    int i,count=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            count++;
            break;
        }
    }
    printf("count=%d\n",count);
    return count;
}

    int main()
    {

    int num,sum=0;
    printf("Enter any integer number: ");
    scanf("%d",&num);
    sum=checkprimenumber(num);
    printf("sum=%d\n",sum);
    if(sum== 0)
    {
        printf("prime number");

    }
    else
    {
        printf("not prime number");
    }


    }*/
/*#include<stdio.h>
int fact(int x);
int main()
{
    int result,n;
    scanf("%d",&n);
    result=fact(n);
    printf("%d",result);

}
int fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}*/

/*#include <stdio.h>

struct marks
{
    int sub1;
    int sub2;
    int sub3;
    int total;
};
int main()
{
    int i, j;
    struct marks student[3] = {{45, 67, 81, 0}, {75, 53, 69, 0}, {57, 36, 71, 0}};
    struct marks total;
    printf("%d\n", student[0].sub1);
    printf("%d\n", student[0].sub2);
    printf("%d\n", student[0].sub3);
    for (i = 0; i < 3; i++)
    {
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
    }
   printf("%d\n",student[0].total);
}

#include<stdio.h>
int main()
{
    int std_roll,phy,che,computer;
    char string[10];
    printf("Input the roll number of student : ");
    scanf("%d",&std_roll);
    printf("Input the name of stdudent : ");
    scanf("%c",string);
    printf("Input the marks of physics ,chemistry and computer application: ");
    scanf("%d %d %d",&phy,&che,&computer);
    printf("Roll no: %d",         )


}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,count=0;

    char word[100];
    //scanf("%d",&n);
    //scanf("%[^\n]",&word);
    gets(word);
    //printf("%c",word[0]);
    for(i=0;i<strlen(word);i++)
    {
        if(word[i]== ' ')
        {
            count++;
        }
    }
    printf("count=%d",count+1);
}*/
/*#include <stdio.h>

// Function using call by value
void callByValue(int x) {
    x = x * 2;
    printf("Inside callByValue function: x = %d\n", x);
}

// Function using call by reference
void callByReference(int *y) {
    *y = *y * 2;
    printf("Inside callByReference function: *y = %d\n", *y);
}

int main() {
    int num1 = 5;
    int num2 = 5;

    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    // Call by value
    callByValue(num1);
    printf("After callByValue: num1 = %d\n", num1);

    // Call by reference
    callByReference(&num2);
    printf("After callByReference: num2 = %d\n", num2);

    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int n;
    printf("number of Hridoy sarker girlfrnd: ");
    scanf("%d",&n);
    printf("Output: %c",n);
}
#include<stdio.h>
int fact(int n1,int n2);
int main()
{
    int n1,n2,GCD;
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
    GCD=fact(n1,n2);
    printf("%d",GCD);

    return 0;
}
int fact(int n1,int n2)
{
    if(n2 != 0)
    {
        return fact(n2 ,n1 % n2);
    }
    else
    {
    return n1;
    }
}
#include <stdio.h>

// Function using call by value
void callByValue(int x) {
    x = x * 2;
    printf("Inside callByValue function: x = %d\n", x);
}

// Function using call by reference
void callByReference(int *y) {
    *y = *y * 2;
    printf("Inside callByReference function: *y = %d\n", *y);
}

int main() {
    int num1 = 5;
    int num2 = 5;

    printf("Original values: num1 = %d, num2 = %d\n", num1, num2);

    // Call by value
    callByValue(num1);
    printf("After callByValue: num1 = %d\n", num1);

    // Call by reference
    callByReference(&num2);
    printf("After callByReference: num2 = %d\n", num2);

    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int n,k,i,temp;
    scanf("%d %d",&n,&k);
    for(i=0;i<k;i++)
    {
        temp=n%10;
        if(temp !=0)
        {
            n=n-1;

        }
        else
        {
            n=n/10;
        }
    }
    printf("%d",n);

}*/
/*#include<stdio.h>
#include<string.h>
int main()
{    int n;
    scanf("%d",&n);
    char word[n];
    int x,count=0,i,total=0;
    scanf("%s",&word);
    //x=strlen(word);
    //printf("x=%d\n",x);

    for(i=0;i<n;i++)
    {
       // printf("%c\n",word[i]);
        if(word[i]=='A')
        {
            //printf("if string is 1");
            count++;
            //total=0;
            //if(count == 7)
            //break;
        }
        if(word[i]=='D')
        {
            //printf("if string is 0");
            total++;
            //count=0;
           // if(total == 7)
           // break;
        }
    }
    //printf("count=%d\n",count);
    //printf("total=%d\n",total);

    //if(  total+count==4 || total + count == 7 /*|| total==4 || count==4 || count== 7 || total==7
   if(count>total)
    {
        printf("Anton");
    }
    else if(total>count)
    {
        printf("Danik");
    }
    else
    {
        printf("Friendship");
    }



}*/
/*#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    int a[1000],b[1000],x[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
       // printf("\n");
    }
    for(j=0;j<n-1;j++)
    {
        x[j]=b[j]-a[j+1];
       //printf("xm[%d]=%d\n",j,x[j]);
        x[j]=x[j]+b[j+1];
        //printf("x[%d]=%d\n",j,x[j]);
        b[j+1]=x[j];

    }

    int max=b[0];

    {

      for(k=0;k<n-1;k++)

      if(x[k]>max)
      {
        max=x[k];
      }
    }
     printf("%d\n",max);



}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
   char word[1000],letter[1000];
   scanf("%s",&word);
   scanf("%s",&letter);



   strcpy(word,strrev(word));



   if(strcmp(word,letter)==0)
   {
    printf("YES");

   }
   else
   {
     printf("NO");
   }



}*/
/*#include<stdio.h>
int main()
{
    int n,h,i,man[1000],j,count=0;
    scanf("%d %d",&n,&h);

    for(i=0;i<n;i++)
    {
        scanf("%d",&man[i]);

    }
     for(j=0;j<n;j++)
    {
    if(man[j]>h)
       count=count+2;

    else
       count=count + 1;
    }
    printf("%d",count);


}
*/
/*#include<stdio.h>
#include<string.h>
int main()
{
    char word[1000];
    int x,i,count=0,total=0,j,amn=0;
    scanf("%s",&word);
    x=strlen(word);
    for(j=0;j<x;j++)
    {
        if(word[j]=='h')
        {
            //printf("amnount=0\n");
         if(amn==0)
           {
             //printf("word=%c\n",word[j]);
             amn++;
             //printf("j=%d amn=%d\n",j,amn);
             continue;
           }
        }
        if(word[j]=='e')
        {
          if(amn==1)
           {
             //printf("word=%c\n",word[j]);
             amn++;
             //printf("j=%d amn=%d\n",j,amn);
             continue;
           }
        }
        if(word[j]=='l')
        {
         if(amn==2)
          {
             //printf("word=%c\n",word[j]);
             amn++;
             //printf("j=%d amn=%d\n",j,amn);
             continue;
          }
        }
        if(word[j]=='l')
        {
         if(amn==3)
          {
             //printf("word=%c\n",word[j]);
             amn++;
             //printf("j=%d amn=%d\n",j,amn);
             continue;
          }
        }
        if(word[j]=='o')
        {
            if(amn==4)
            {
             //printf("word=%c\n",word[j]);
             amn++;
             //printf("j=%d amn=%d\n",j,amn);
             continue;
            }
        }
    }
    //printf("amn=%d\n",amn);

    for(i=0;i<x;i++)
    {

        if(word[i]=='h' || word[i]=='e' || word[i]=='l' || word[i]=='o' )
        {
            total++;
        }
        if(word[i]=='h' || word[i]=='e' || word[i]=='l' || word[i]=='o' )
        continue;
        /*else
        {
            count++;
        }*/
//   }
// printf("total=%d\n",total);

// if( total>=5 && amn==5)
//{
//     printf("YES");
// }
// else
// {
//    printf("NO");
//}

//}
/*#include <stdio.h>
#include <string.h>
int main()
{
    int number[1000],i, x;
    scanf("%d",&number);
    printf("number=%d\n", number);

   // x == sizeof(number);
    printf("%d", x);
    //for (i = 0; i < sizeof(number); i++)
    //{
   // }
}*/
/*#include<stdio.h>
int main()
{
    long long int i,j,n,k,count=0;
    scanf("%lld %lld",&n,&k);

    for(i=1;i<=n;i=i+2)
    {
        if(i%2!=0)
        {
            count++;

        }
        if(count==k)
        {
            printf("%d",i);
            break;
        }
        for(j=2;j<=n;j=j+2)
        {
            if(j%2==0)
            {
                count++;
            }
            else if(count==k)
            {
                printf("%d",k);
                break;
            }
        }
    }

}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    long long k,n,x;
    scanf("%lld", &n);
    scanf("%lld",&k);
    if(n%2==0)
    {
        if((n/2)>=k)
        x=2*k-1;
        else
        {k-=(n/2);
        x=2*k;}
    }
    else if(n%2!=0)
    {
        if((n/2)>=(k-1))
        x=2*k-1;
        else
        {
            k-=(n/2);
            x=2*(k-1);
        }
    }
    printf("%lld\n",x);
}*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char word[1000],letter[1000],i;
    int x;

    scanf("%s",&word);
    scanf("%s",&letter);
    //puts(a);
    //puts(b);
    //printf("%c",word[1]);
    x=strlen(word);
    //("%d\n",x);

    for(i=0;i<x;i++)
    {
        if(word[i]!=letter[i])
        {
            printf("1");
        }
        else
        {
          printf("0");
        }
    }



}*/
/*#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(i%2!=0 )
      {
        printf("I hate ");
        if(i<n)
        {
            printf("that ");
        }
      }
      else
      {
        printf("I love ");
        if(i<n)
        {
            printf("that ");
        }
      }

    }
    printf("it");
}*/
/*#include <stdio.h>
int main()
{
    int n, x, y, a[100], b[100], i, j, k, l, count = 0;
    scanf("%d", &n);

    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &y);
    for (j = 0; j < y; j++)
    {
        scanf("%d", &b[j]);
    }

    for (k = 1; k <= n; k++)
    {
        //printf("k=%d\n", k);
        for (l = 0; l < x || l < y; l++)
        {
            //printf("l=%d\n", l);
            if (k == a[l] || k == b[l])
            {
                //printf("condition true\n");
                count++;
                //printf("count=%d\n", count);
                break;
            }
        }
    }
    //printf("total count=%d\n", count);
    if(n==count)
    {
        printf("I become the guy.");
    }
    else
    {
        printf("Oh, my keyboard!");
    }9
}*/

/*
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,a[100],b[100],i,j,y[100];
    float x;
    int c[100];
    float d[100];
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
        d[i]=ceil((float)(abs(a[i]-b[i]))/2);
        x=(float)d[i]/(float)c[i];
        printf("%0.0f\n",ceil(x));
    }
    for(j=0;j<n;j++)
    {
        //d[j]=ceil(abs(a[j]-b[j]/2));
        d[j]=ceil((float)(abs(a[j]-b[j]))/2);


        //printf("d=%f\n",d[j]);
        //printf("c=%d\n",c[j]);
        x=(float)d[j]/(float)c[j];
        printf("%0.0f\n",ceil(x));
    }
}
*/
/*#include<stdio.h>
int main()
{
    int n,i,j,a[100],count=0,k,total,x,y;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   int  maximum=a[0];

    for(j=1;j<n;j++)
    {
      // int  maximum=a[0];

       if(maximum<a[j])
       {

           count = j;
           maximum = a[j];
       }

    }
    y=count;
    //printf("maximum = %d\n",maximum);
    //printf("y = %d\n",y);
     int minimum = a[0];
    for(k=0;k<n;k++)
    {
      //printf("welcome to k\n");;;

      if(minimum>=a[k])
      {
         minimum = a[k];
         //printf("minimum = %d\n",a[k]);
         total = k;

      }
    }
    //printf("k = %d\n",total);
    x = n -total-1;

   // printf("x = %d\n",x);
   // printf("summation = %d\n",x+y);
   // printf("x = %d\n",x);
   // printf("y = %d\n",y);

    if(y>=total && x!=0 && y!=0)
    {
       printf("%d\n",y+x-1);
    }
    else
    {
        printf("%d\n",y+x);
    }

}*/

/*#include<stdio.h>
int main()
{
   int n,i,j,k,temp,a[100];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(j=0;j<n;j++)
   {
    for(k=j+1;k<n;k++)
    {
        if(a[j]>a[k])
        {

            temp = a[j];
            a[j]=a[k];
            a[k]=temp;

        }
    }
   }
   for(k=0;k<n;k++)
   {
   printf("%d ",a[k]);
   }
}*/
/*#include<stdio.h>
int main()
{

    int a[6]= {12,5,10,9,7,6};
    int temp;
    int i, j;

     printf("Before Sorting ");

    for(i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0; i<6; i++)
    {
        for(j=i+1; j<6; j++)
        { if(a[i]>a[j])
            {
                temp = a[i];
                printf("temp = %d\n",temp);
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
     printf("\nAfter Sorting ");
    for(i=0; i<6; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    long long n,a[10000],b[10000],i,plus;
    float total;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a[i],&b[i]);
        total =ceil((float) a[i]/b[i]);
        plus = (total*b[i]-a[i]);
        printf("%d\n",plus);
    }



}*/
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,x=65,y=97,j,k,count=0,total=0;
    scanf("%d",&n);
    char word[n-1];
    scanf("%s",&word);

    for(i=65,j=97;i<91,j<=122;i++,j++)
    {
      for(k=0;k<n;k++)
      {

        if(word[k] == i || word[k] == j)

        {

         // printf("char = %c\n",word[k])  ;
         count++;
         //printf("count= %d\n",count);
         break;



      }
    }
    }
    //printf("count=%d\n",count);
    if(count==26 )
    {
        printf("YES");

    }
    else{
        printf("No");
    }



}*/
/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch[1000];
    int count=0;
    gets(ch);
    //puts(ch);

   for(int i=97;i<=122;i++)
   {
    for(int j=1;j<strlen(ch);j=j+3)
    {
        if(i==ch[j])
        {
            count++;
            break;
        }
    }
   }
   printf("%d",count);
}
*/
/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int count = 0, total = 0;
    char ch[1000];
    scanf("%s", &ch);
   // printf("strlen = %d\n", strlen(ch));
    if (islower(ch[0]))
    {
        total++;
    }

    for (int i = 0; i < strlen(ch); i++)
    {

        if (65 <= ch[i] && ch[i] <= 90)
        {

            count++;
        }
        if (isupper(ch[i + 1]))
        {
            total++;
        }
    }
   // printf("count = %d\n", count);
    if (count == strlen(ch) )
    {
       for(int i=0;i<strlen(ch);i++)
       {
        printf("%c",ch[i]+32);
       }
    }
    if(total==strlen(ch))
    {
        printf("%c",ch[0]-32);
        for(int j=1;j<strlen(ch);j++)
        {
            printf("%c",ch[j]+32);
        }
    }
    if (total != strlen(ch) && count != strlen(ch) )
    {
       puts(ch);
    }



}*/

/*#include<stdio.h>
int main()
{
    int n,temp,count=0,x,y,z;
    scanf("%d",&n);


    while(n>=100)
    {
        n=n-100;
        count=count+1;
    }


    while(n>=20)
    {
       n=n-20;
       count++;
    }


    while(n>=10)
    {
         n=n-10;
         count++;
    }

    while(n>=5)
    {
        n=n-5;
        count++;
    }

    printf("%d",count+n);
}*/
/*
#include<stdio.h>
int main()
{
  int n,a[100],b[100],count=0;
  scanf("%d",&n);

  for(int i=0;i<n;i++)
  {
    scanf("%d %d",&a[i],&b[i]);

  }

  for(int j=0;j<n;j++)
  {
    for(int k=0;k<n;k++)
    {
        if(j!=k && a[j]==b[k])
        {
           count++;
        }
    }
  }
  printf("%d",count);
}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int sum=0;
    char word[100];
    char cha1[15]="Tetrahedron";
    char cha2[15]="Cube";
    char cha3[15]="Octahedron";
    char cha4[15]="Dodecahedron";
    char cha5[15]="Icosahedron";


    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
       scanf("%s",&word);
       if(strcmp(cha1,word)==0)
       {
            sum=sum+4;
       }
        if(strcmp(word,cha2)==0)
       {
            sum=sum+6;
       }
        if(strcmp(word,cha3)==0)
       {
            sum=sum+8;
       }
        if(strcmp(word,cha4)==0)
       {
            sum=sum+12;
       }
        if(strcmp(word,cha5)==0)
       {
            sum=sum+20;
       }

    }
    printf("%d",sum);

}*/
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    long int a[10000], total[10000];
    double count;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);

        if (a[i] % 2 == 1)
        {

            count = ceil(((double)a[i] / 2));

           printf("%ld\n",a[i] - (long int)count);
        }
        else
        {
            total[i] = (a[i] / 2) - 1;
            printf("%ld\n", total[i]);
        }
    }
}*/
/*

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define hthjyjn 3.1416
int main()
{
    char a, ch[100], wor[100], char3[100];
    char char1, char2;
    int sum = 0, number, total = 0;
    scanf("%s", &ch);
    scanf("%s", &wor);
    wor == strlwr(wor);
    ch==strlwr(ch);

    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] < wor[i])
         {   printf("-1");
          break;}
        else if(ch[i] > wor[i])
        { printf("1");
         break;}
    }
    if (strcmp(ch, wor) == 0)
    {
        printf("0");
    }
}*/
/*#include <stdio.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= m; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < n; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        if (i % 2 == 0)
        {
            if (i % 4 == 0)
            {
                for (int k = 1; k <= n; k++)
                {
                    if (k == 1)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(".");
                    }
                }
                printf("\n");
            }
            if (i % 2 == 0 && i % 4 == 2)
            {
                for (int l = 1; l <= n; l++)
                {
                    if (l == n)
                    {
                        printf("#");
                    }
                    else
                    {
                        printf(".");
                    }
                }
                printf("\n");
            }
        }
    }
    printf("\n");
}*/
/*#include<stdio.h>
int main()
{
    int a,b,x,i=1;
    scanf("%d %d",&a,&b);
    int total=a;
    while(total%10!=0)
    {

        //printf("a=%d\n",a);
        int mul=a*i;

        x=(a*i-b)%10;
        //printf("mul = %d x=%d \n",mul,x);
        if(x==0 || mul%10==0)
        {
            break;
        }
        i++;
        total=a*(i);

        //printf("a=%d i=%d\n",a,i);
        printf("-----------\n");

    }
    printf("%d",i);

}*/

#include <stdio.h>
int main()
{
    int n, count,sum=0;
    printf("Enter any positive integer: ");
    scanf("%d", &n);
    for (int j = 2; j <= n; j++)
    {
        count=0;
        for (int i = 2; i < j; i++)
        {
            if (5 % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            sum=sum+j;
            printf("%d ", j);
        }
    }
    
}