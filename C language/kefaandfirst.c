/*#include <stdio.h>
int main()
{
    long long n, i, j, k = -1, count = 1,  max;
    scanf("%lld", &n);
    long long int a[n - 1],temp[n];
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (j = 0; j < n - 1; j++)
    {
        if (a[j] <= a[j + 1])
        {
            count++;
            //printf("count=%d\n", count);
        }
        else
        {
            k++;
            temp[k] = count;
            //printf("k=%d\n", k);
            //printf("temp=%d\n", temp[k]);


            count = 1;
        }
    }
   // printf("%d %d\n", temp[0], temp[1]);

    if (k != -1)
    {
        for (int l = 0; l <= k; l++)
        {
            if (temp[0] <= temp[l])
            {
                temp[0] = temp[l];
            }
        }
        if(temp[0]>count)
        {
          printf("%lld",temp[0]);

        }
        else{
            printf("%lld\n",count);
        }
    }
    else
    {
       printf("%lld\n",count);
    }
}*/
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[10000];
    scanf("%s", &ch);
    // puts(ch);
    // printf("%d\n", strlen(ch));
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == 'W' && ch[i+1] =='U')
        {
           
            if (ch[i + 1] == 'U')
            {
             
                if (ch[i + 2] == 'B')
                {
                    i = i + 2;
                   
                }
            }
        }
        else
        {
            printf("%c", ch[i]);
            if (ch[i + 1] == 'W')
            {
                if (ch[i + 2] == 'U')
                {
                    if (ch[i + 3] == 'B')
                    {

                        printf(" ");
                    }
                }
            }
        }
    }
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{   
    int count=0;
    char ch[1000];
    scanf("%s",&ch);
    printf("%c %c %c\n",ch[2],ch[3],ch[4]);

    for(int i=97;i<=122;i++)
    {
     
         for(int j=0;j<strlen(ch);j++)
         {
          
            if(i==ch[j])
            {    
               
  
                count = count +1;
                break;

            }
         }
    }
    printf("%d",count);
    


}*/