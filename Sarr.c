#include<stdio.h>
void main()
{
    int i,j,arr[50],size,sum;
    printf("enter the size of array :  ");
    scanf("%d",&size);
    printf("enter elements of array \n");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%d",sum);

    
}