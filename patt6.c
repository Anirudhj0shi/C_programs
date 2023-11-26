#include<stdio.h>
void main()
{
    int i,j,a;
    printf("enter number of astriks u want to print : ");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       for(j=1;j<=i;j++)
       {
            if(i%2==0)
                printf("*");
            else
                printf("#");
       }
       printf("\n");
        
    }
}