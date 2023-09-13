#include<stdio.h>
void main()
{
    int a;
    printf("enter the numbers you want to get sum of : ");
    scanf("%d",&a);
    
    int sum = 0;
    for (a;a!=0;a)
    {
        sum = sum+a;
        scanf("%d",&a);
    }
    printf("%d is the sum of the numbers you entered ",sum);
}