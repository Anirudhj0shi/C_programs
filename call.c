#include<stdio.h>
void swap(int a,int b )
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("after swapping in swap funtion : \na : %d\nb : %d\n ",a,b);
}
void main()
{
    int a, b ;
    printf("enter values of A and B :  ");
    scanf("%d  %d ",&a,&b);

    printf("before swapping : \na : %d\nb : %d\n ",a,b);
    swap (a,b);
    printf("after swapping : \na : %d\nb : %d\n ",a,b);
}