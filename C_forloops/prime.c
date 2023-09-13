#include<stdio.h>

void main ()
{
    for (int i=2;i<=100;i++)
    {
        for (int j=2;j<=i;j++)
        {
            if (i == j)
                printf("%d\n",i);
            else if(i%j == 0)
                break;
        }
    }
}
/**/

/*

int checkprime(int num)
{
    int i;

    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        break;
    }
    if(i>num/2 && num>1)
        return 1;
    else
        return 0;
}
void main()
{
    int num;
    printf("enter a number to check : ");
    scanf("%d",&num);
    checkprime(num) ? printf("number is prime") : printf("number is not prime ");
}
*/

