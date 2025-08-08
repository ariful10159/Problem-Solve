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
       printf("xm[%d]=%d\n",j,x[j]);
        x[j]=x[j]+b[j+1];
        printf("x[%d]=%d\n",j,x[j]);
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
#include<stdlib.h>

int main()
{
    char number[1000];
    int i,count=0,x;
    //gets(number);
    scanf("%s",&number);
    //puts(number);
    //strcpy(x,atoi(number) % 4 );
   // x=atoi(number)/4;
    //printf("x=%d\n",x);
    //printf("lenth=%d\n",strlen(number));
    for(i=0;i<strlen(number);i++)
    {
        if(number[i]=='4' || number[i]=='7' )
        count++;

    }
    //printf("%d\n",count);
    if(count==strlen(number) || atoi(number)%4==0 || atoi(number)%7==0 || atoi(number)%47==0 )
    printf("YES");
    else
    printf("NO");


}*/
/*#include <stdio.h>
int main()
{
  int n, i, a[i], j = 0, k, count = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  if (a[0] == 10)
  {
  // for ()
  read:
    while(a[j] == 10)
    {

      printf("j=%d\n", j);
      if (a[j] == 10)
      {
        j++;
        continue;
      }
      else
      {
        count++;
        j++;
        break;
      }
    }

    {
      for (k = j; k < n; k++)
      {
        printf("k=%d\n", k);
        if (a[k] == 01)
        {
          continue;
        }

        else
        {
          count++;
          k = j + 1;
          goto read;
        }
      }
    }
  }
  printf("count=%d", count);
}*/
/*#include<stdio.h>
int main()
{
    long long int n, s;
    scanf("%lld", &n);
    if(n%2==0)
        s=((n/2)*((n/2)+1))-((n/2)*(n/2));
    else
        s=((n/2)*((n/2)+1))-((n/2)*(n/2))-n;
    printf("%lld\n", s);
}*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,a,b,i,j,y;
    float x;
    int c;
    float d;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        d=ceil((float)(abs(a-b))/2);
        x=(float)d/(float)c;
        printf("%0.0f\n",ceil(x));
    }
    
}
