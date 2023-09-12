//to determine whether a year is leap year or not
#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("enter the year u want to check :  ");
    scanf("%d",&year);

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            printf("year is leap year ");
            else
            printf("year is not a leap year");
        }
        else
        {
            printf("year is a leap year");
        }
    }
    else
    printf("not a leap year");
    return;
}
