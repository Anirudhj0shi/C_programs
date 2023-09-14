#include<stdio.h>
#include<stdlib.h>
void swapdigits(int arr[], int size , int numdigits)
{
    for(int i = 0; i < numdigits ; i++ )
    {
        int temp = arr[i];
        arr[i] = arr[size - numdigits + i];
        arr[size - numdigits + 1] = temp;
    }
}

void main ()
{
    int arr[50],size;
    printf("enter size of the array ");
    scanf("%d",&size);
    printf("enter the values in the array \n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
   
    int numdigits = size / 2;
    swapdigits(arr , size , numdigits);

    printf("after swapping the numbers  : ");
    for(int i = 0;i < size ; i++ )
        printf("%d\t",arr[i]);

}