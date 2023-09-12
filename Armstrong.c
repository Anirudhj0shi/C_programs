#include<stdio.h>
#include<math.h>
void main()
{
    int temp1,count,num,num1,num2,sum,temp,rem,n;
    temp = num;
    temp1 = temp;
    printf("enter number start and end numbers  ");
    scanf("%d %d ",&num1,&num2);
    for(num = num1;num<=num2;num++)
    {
        n=num;
        temp = num;
        temp1=num;
        count = 0;
        sum =0;

        while(n>0)
        {
            count++;
            n = n/10;
        }
        while(temp>0)
        {
            rem = temp%10;
            sum = sum + pow(rem, count);
            temp = temp / 10;
        }
        if( temp1 == sum)
            printf("%d \n",temp1);
    }
}