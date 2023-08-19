#include<stdio.h>
void main()
{
    int angle1, angle2, angle3,sum;
    printf("enter three angles of triangle : \n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);

    sum= angle1+angle2+angle3;

    if(sum == 180 && angle1 > 0 && angle2>0 && angle3>0)
    {
        printf("triangle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }
}