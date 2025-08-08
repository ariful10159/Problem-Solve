/*#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,c,d,e;
    scanf("%f %f",&A,&B);
    //printf("%f %f",A,B);
    c=floor(A/B);
    //printf("%0.0f\n",c);
    d=ceil(A/B);
    //printf("%0.0f\n",d);
    e=round(A/B);
    //printf("%0.0f\n",e);
    printf("floor %0.0f / %0.0f = %0.0f\n",A,B,c);
    printf("ceil %0.0f / %0.0f = %0.0f\n",A,B,d);
    printf("round %0.0f / %0.0f = %0.0f\n",A,B,e);

}*/
/*#include<stdio.h>
#define pi 3.141592653
#include<math.h>
int main()
{
    double r,area;
    scanf("%lf",&r);
    //printf("%lf\n",r);
    area = pi*r*r;
    printf("%0.9lf",area);


}
*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    char s;
    scanf("%d%c%d",&a,&s,&b);
    //printf("%c\n",s);
    if(s == '+')
       {printf("%d",a+b);}
    else if(s == '-')
        {printf("%d",a-b);}
    else if(s == '*')
       { printf("%d",a*b);}
    else
        {printf("%d",a/b);}
}*/
/*#include<stdio.h>
int main()
{
  
    char b;
    scanf("%c",&b);
    //printf("%d\n",b);
    if(47<b && b<58)
       {printf("IS DIGIT");}
    else if(64<b && b<92)
       {printf("ALPHA\nIS CAPITAL");}
    else if(97<=b && b<=122)
       {printf("ALPHA\nIS SMALL");}

        
    
    
    
}*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,c;
    int b;
    scanf("%f",&a);
    b=floor(a);
    printf("int %d ",b);
    c=a-b;
    if(c>0)
    printf("%f",c);
   


   




   
}