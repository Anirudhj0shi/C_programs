//To swap 2 numbers using third variable
#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two numbers u want to swap :");
    scanf("%d%d",&a,&b);
    printf("numbers before swapping : \n a= %d \n b= %d",a,b);
    

    a = a-b;
    b = a+b;
    a = b-a;
    printf( " \n numbers after swapping : \n a= %d \n b= %d",a,b);
    
}
