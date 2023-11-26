#include<stdio.h>
void main ()
{
    int i,j,n;
    printf("enter the number of rows u want to print  :");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        if(i%2==0)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",j);
            }
            printf("\n");
        }
        else
        {
            for(j=i;j>=1;j--)
            {
                printf("%d",j);
            }
            printf("\n");
        }
    }
}