#include<stdio.h>
#include<string.h>
int main()
{
    char word[100],letter[100];
    int count=0,n,i,c,h,d;
    //word[100]=letter[100];
    scanf("%s",&word);
    //printf("%s\n",word);
    //printf("%s\n",letter);
    strcpy(letter,word);
   // printf("%s\n",letter);
   c=strlen(word);
  printf("c=%d\n",c);
    for(n=0;n<=c;n++)
    { 
        
      for(i=n+1;i<=c;i++)
      {
       
        if(word[n]==letter[i])
         {
            printf("n=%d i=%d\n",n,i);
            count=count+1;
            printf("c=%d\n",count);
         }
        

      }
      
    }
    printf("count=%d\n",count);
    d=c-count;
    printf("d=%d\n",d);
    if(d%2==0 && d!=0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }

    

}