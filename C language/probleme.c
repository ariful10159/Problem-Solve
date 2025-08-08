/*#include <stdio.h>

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
}*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    char a,ch[100],wor[100];
    char char1,char2;
    int sum=0,number,total=0;
     scanf("%s",&ch);
     scanf("%s",&wor);
     for(int i=0;i<strlen(ch);i++)
     {
        sum=sum+(int)ch[i];
        total = total+(int)tolower(wor[i]);
     }
    printf("%d %d\n",sum,total);
    if(sum<total)
    {
        printf("-1");
    }
    else if(sum>total)
    {
        printf("1");
    }
    else
    printf("0");
 
   
}