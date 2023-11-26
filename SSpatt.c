#include<stdio.h>
void main ()
{
    int i,j,n,sp;
    printf("enter the number of rows u want to print  :");
    scanf("%d",&n);
    //for(i=n;i>=1;i--)
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
           // printf("*");
           printf(" *");
        }
        printf("\n");
    }
}