#include<stdio.h>
enum days_of_week
{
    sun,mon,Tue,Wed,Thu,Fri,sat
};
int main()
{
    enum days_of_week day1,day2;
    day1 = sun;
    day2 = Wed;
    printf("Day1 = %d\n",day1);
    printf("Day2 = %d\n",day2);
    return 0;

}