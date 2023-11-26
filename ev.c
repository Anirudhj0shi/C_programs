#include<stdio.h>
void evenodd()
{
    int a,b,i;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
            printf("\n%d   -- even ",i);
        else
            printf("\n%d   --  odd  ",i);
    }

}

void main()
{
    evenodd();
}
