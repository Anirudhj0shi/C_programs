#include<stdio.h>
void main()
{
    int i,j,r,c,arr[50][50];
    printf("enter the rows and coloum of the matrix:  ");
    scanf("%d%d",&r,&c);
    printf("enter the elements of the array :\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }   
    }
    printf("the elements of the array :\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t",arr[i][j]);
        } printf("\n");  
    }
    if(i==j)
    {
        if(arr[i][j] == 1)
        printf("its a unit matrix ");
    }
    else
    {
        printf("not a unit matrix");
    }
}