#include<stdio.h>
void main()
{
    int i,j,num;
    printf("number : ");
    scanf("%d",&num);
    for ( i = 1; i <= num; i++)
    {
        /* code */
        for(j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    
}