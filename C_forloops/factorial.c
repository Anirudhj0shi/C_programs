#include<stdio.h>
void main()
{
    int num,i;
    printf("entre the number for factorial :");
    scanf("%d",&num);
    int fact=1;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial :%d",fact);
}