//To check entered number is even or odd
#include<stdio.h>
void main()
{
    int a;
    printf("enter a number to check = ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("number is even : %d",a);
    }
    else
    {
        printf("number is odd : %d",a);
    }
    
}
