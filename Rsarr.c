#include<stdio.h>
void main()
{
    int i,j,r,c,arr[50][50],SR;
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
    printf("Enter the row number u want to get the sum =  ");
    scanf("%d",&SR);
    if(SR<0 || SR>r)
        printf("invalid row");
    else
    {
        int sum = 0;
        for(j=0 ; j < c; j++)
        {
            sum += arr[SR][j];
        } 
        printf("sum is : %d",sum);

    }  
}