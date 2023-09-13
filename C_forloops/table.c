#include<stdio.h>
void main()
{
    int a;
    printf("enter the number u want to print the table:  ");
    scanf("%d",&a);
    int t;

    for(int i = 1;i<=10;i++)
    {
        t=a*i;
        printf("%d*%d=%d\n",a,i,t);
    }
}