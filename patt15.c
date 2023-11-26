#include<stdio.h>
void main()
{
    int i,j,a,n;
    printf("no of lines u want to print in pattern ");
    scanf("%d",&a);
    n=a;
    for ( i = 1; i <= a; i++)
    {
        for(j=a;j>=i;j--)
        {
            printf(" %d ",n);
            
        }
        n -= 1;
        printf("\n");
    }
    
}