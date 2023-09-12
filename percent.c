// find out total and percent of 5 numbers
#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("enter the number of 5 subjects : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int Total;
    Total = a+b+c+d+e;
    float perc;
    perc = Total/5;
    printf("Total : %d",Total);
    printf("\n Percentage : %2.f",perc);
    
}