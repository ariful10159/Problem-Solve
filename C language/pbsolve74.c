/*#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = 0, total = 0;
    char word1[100], word2[100], word3[100],word4[100];
    scanf("%s", &word1);
    scanf("%s", &word2);
    scanf("%s", &word3);
    strcat(word1, word2);
    puts(word1);
    printf("\n");

    for (int i = 0; i < strlen(word3); i++)
    {
        for (int j = 0; j < strlen(word1); j++)
        {
            printf("i=%d j=%d\n",i,j);
            if (word3[i] == word1[j])
            {
                printf("dskjfishj\n");
                strcpy(word4[i],word1[j]);
                printf("word4=%s\n",word4);
            }

        }
    }
    printf("%s\n",word4);
    if (strcmp(word3,word4)==0)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }
}*/
/*
#include<stdio.h>
int main()
{
    char operator;
    float a,b;
    printf("Enter an operator(+,-,*,/)");
    scanf("%f %c %f",&a,&operator,&b);
    switch(operator)
    {
        case '+':
        printf("%f",a+b);
        break;
        case '-':
        printf("%f",a+b);
        break;
         case '*':
        printf("%f",a+b);
        break;
         case '/':
        printf("%f",a+b);
        break;




    }


}*/
/*
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0;
    int arr[100000],a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         scanf("%d",&c);
         scanf("%d %d",&a,&b);
         for(int j=0;j<c;j++)
         {
            scanf("%d",&arr[j]);
         }
         for(int j=0;j<c;j++)
         {
            printf("arr[%d]=%d",j,arr[j]);
         }
         printf("\n");

         for(int k=0;k<c;k++)
         {
            printf("k=%d\n",&k);

            for(int l=0;l<c;k++)
            {
                printf("l=%d\n",l);

                if(k!=l && a<= arr[k]+arr[l] <=b  )
                {
                    count++;
                }
            }
         }

         printf("count=%d\n",count);
    }

}*/
/*
#include <stdio.h>
int f(int s[], int n, int a, int b)
{
    int count = 0;
    long long r;
    for (int i = 0, j = 1; i < n, j < n; j++)
    {

        r = s[i] + s[j];

        if (r >= a && r <= b)
        {

            count++;
        }

        else
        {
            j = i + 1;
            i++;
        }
    }
    return count;
}
int main()
{
    int n, a, b, t, count = 0;
    long long r;
    scanf("%d", &t);
    for (int l = 0; l < t; l++)
    {
        count = 0;
        scanf("%d%d%d", &n, &a, &b);
        int s[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &s[j]);
        }
        int d = f(s, n, a, b);
        printf("Case %d: %d\n", l + 1, d);
    }
}*/
#include <stdio.h>

long long f(int a[], int n) {
    long long Count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int total= 1; 

            for (int k = i; k <= j; k++) {
                if (a[k] != a[i]) {
                    total = 0; 
                    break;
                }
            }

            if (total==0) {
               Count++;
            }
        }
    }

    return Count;
}

int main() {
    int T;
    scanf("%d", &T);

    for (int t = 1; t <= T; t++) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        long long result = f(a, n);
        printf("Case %d: %lld\n", t, result);
    }

    return 0;
}
