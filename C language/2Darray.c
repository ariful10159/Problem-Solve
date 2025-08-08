/*#include<stdio.h>
int main()
{
  int i=0,j=0;
  int a[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
  for(i=0;i<4;i++)
    {
      for(j=0;j<3;j++)
        printf("A[%d][%d]=%d\n",i,j,a[i][j]);

    }



}*/

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  char x[100000],y[100000];
  int count=0,i;
  scanf("%s",&x);
  for(i=1;i<90000;i++,atoi(x)+1)
  {
    puts(x[i]);
    strcpy(y[i],x[i]);
    if(strcmp(y[i],strrev(x[i]))==0 || atoi(x[i])%303==0)
    {
      count++;

    }


  }
  printf("%d",count);
}*/

/*#include<stdio.h>
int main()
{
    int n,i,j,a[100],count=0,k,total=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    for(j=1;j<n;j++)
    {
       int  maximum=a[0];
       printf("%d\n",maximum);

       if(maximum<a[j])
       {
           count++;
           maximum = a[j];
       }
       else{
        count++;
       }

    }
    printf("count = %d\n",count);
    for(k=n-2;k>=1;k--)
    {
      //printf("welcome to k\n");
      int minimum = a[n-1];
      if(minimum>a[k])
      {
        total++;
        minimum = a[k];
      }
    }
    printf("%d",total);
}*/
/*#include <stdio.h>
#include <math.h>
int main()

{
  
 long long n, q;

  long long a[n], count = 0;
  long long int b, c;
  scanf("%lld %lld",&n,&q);
  for (long j = 1; j <= n; j++)
  {
 
    scanf("%lld",&a[j-1]);
  }
  printf("%lld\n",&a[1]);
  for (int k=0;k<q;k++)
  {
    count = 0;
    scanf("%lld %lld",&b,&c);

    while (b <= c)
    {
      count = count + a[b - 1];
      b++;
    }
    printf("%lld",count);
  }
}*/
#include<stdio.h>
int main()
{
    int n, i=0, j=1, k=1;
    n = j++ && k++ && i++;
    
    printf("%d %d %d %d", i,j,k,n);
}