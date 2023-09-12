#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers : \n");
    scanf("%d%d",&a,&b);
    if(a==b)
    printf("numbers are equal %d = %d ",a,b);
    else if (a>b)
    printf("%d is greater ",a);
    else 
    printf("%d is greater ",b); 
}