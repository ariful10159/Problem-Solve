#include<stdio.h>
struct person
{
    int age;
    int salary;
};
int main()
{    int i;
    struct person person[4];

    for(i=0;i<4;i++)
    {
        printf("Enter element of person %d\n",i+1);
        printf("Enter Age:");
        scanf(" %d",&person[i].age);
        printf("Enter Salary : ");
        scanf("%d",&person[i].salary);

    }

    for(i=0;i<4;i++)
    {
        printf("information person%d ",i+1);
        printf("Age = %d \n",person[i].age);
        printf("Salary =%d \n",person[i].salary);
        printf("\n");

    }


}
