#include<stdio.h>
void main ()
{
    long D;
    int a,b,c,d;
    printf(" enter a four digit number :");
    scanf("\n%ld",D);
    a= D%10;
    b=D%1000;
    printf("%d\n%d",a,b);
}