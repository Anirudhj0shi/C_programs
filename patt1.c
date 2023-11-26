#include<stdio.h>
void main()
{
    int i,a,j;
    printf("enter number of astriks u want to print : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {   printf("*");
        for(j=1;j<=i;j++){
            printf("*");}
            printf("\n");
    }
}