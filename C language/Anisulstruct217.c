#include<stdio.h>
#include<string.h>
struct person
{
    char name[20];
    int age;
    int salary;
};

void display(struct person p)
{
    printf("Name : %s \n",p.name);
    printf("Age : %d \n",p.age);
    printf("Salary : %d \n",p.salary);
};

int main()
{
    struct person person1;
    strcpy( person1.name,"Anisul islam");
    person1.age =27;
    person1.salary = 27000;
    display(person1);

}