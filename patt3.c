#include<stdio.h>
void  main()
{
    int i,j,a;
    printf("enter number of astriks u want to print : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for ( j = 0; j < i;j++)
        {
            /* code */
            printf(" ");
        }
        printf("*\n");
        
        
    }
} 