#include<stdio.h>
void main()
{
    int i,j,r,c,arr[50][50],sum;
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
    sum=arr[0][0]+arr[r-1][0]+arr[0][c-1]+arr[r-1][c-1];
    printf("%d",sum);
}