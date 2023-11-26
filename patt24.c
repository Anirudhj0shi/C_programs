#include<stdio.h>
void main ()
{
    int i,j,k,a;
    printf("enter the number of rows u want to print  :");
    scanf("%d",&a);
    for(i=a;i>=0;i--)
    {
        for ( j = 0; j < i;j++)
        {
            printf(" ");
        }
        for(k=a;k<=i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}