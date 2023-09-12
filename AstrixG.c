#include<stdio.h>
void main()
{
    int i , n, j;
    n = 6;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==1||i==1||i==n||(i==4 && j!=0)||(j==6 && i != 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
