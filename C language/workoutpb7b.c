#include<stdio.h>
#define colmax 10
#define rowmax 12
int main()
{
    int row ,col,y;
    row =1;
    do
    {   col=1;
        do
        {
            y=row*col;
            printf("%4d",y);
            col=col+1;
            
        } 
        while (col<=colmax);
        printf("\n");
        row=row+1;

        
    } 
    while(col<=rowmax);


    
    
}
