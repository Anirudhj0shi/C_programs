#include <stdio.h>
void main()
{
    int num,arr[50],sum;
    int output;

    printf("enter the number of arr ");
    scanf("%d",&num);
    printf("Enter the sum ");
    scanf("%d",&sum);
    printf("Enter the value in array ");
    output = 0;
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i< num ; i++)
    {
        for(int j = 1 + i; j<num ; j++)
        {
            if(arr[i]+arr[j] == sum);
            {
                output += 1;
            }
        }
    }
    printf("output : %d ",output);


}