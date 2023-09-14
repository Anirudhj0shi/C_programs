#include<stdio.h>
void main()
{
    int i,j,r,c,arr[50][50],SC;
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
    printf("Enter the coloum number u want to get the sum =  ");
    scanf("%d",&SC);
    int sum = 0;
    if(SC<0 || SC>c)
    printf("invalid coloum ");
    else
    {
        
        for(i=0;i<r;i++)
            sum += arr[i][SC];
    }
    printf("sum of the elements in coloum : %d",sum);
}