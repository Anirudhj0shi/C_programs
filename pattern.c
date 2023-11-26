#include<stdio.h>
void main ()
{
    int i,j,n;
   // printf("enter the number of rows u want to print  :");
    //scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}