#include<stdio.h>
void main ()
{
    int i,j,n;
    printf("enter the number of rows u want to print  :");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==j||i==n)
            printf("%d",j);
            else
            printf(" ");
        }
        printf("\n");
    }
}