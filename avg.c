//to find ave of 5 numbers 
#include<stdio.h>

void main()
{
    int a,b,c,d,e;
    printf("enter 5 numbers for calculating avg :");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    float Avg;

    Avg=(a+b+c+d+e)/5;
    printf("the average of entered numbers are = %.2f",Avg);


}