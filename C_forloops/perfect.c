
#include<stdio.h>
void main()
{
    int num,i,sum=0;
    printf("enter the number :");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num)
            printf("number is perfect \n");
    else
            printf("number is not perfect \n");

}
