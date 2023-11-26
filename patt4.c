/*
if num =5

*****
*****
*****
*****
*****
*/
#include<stdio.h>
void  main()
{
    int i,j,a;
    printf("enter number of astriks u want to print : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=0;j<=a;j++)

            if(j!=a)
                printf("*");
            else
                printf("\n");  
    }
}