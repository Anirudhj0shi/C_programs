// greatest among 4 numbers
#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter 4 numbers u have to check :  ");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b)
    {
        if(a>c)
        {
              if(a>d)
              {
                   printf("%d  is the big ",a);

              }
              else 
                   printf("%d is the big ",d);
        }
    }
    else if(b>c)
    {
        if(b>d)
        {
            printf("%d is big",b);
        }
        else 
            printf("%d is the big ",d);
    }
    else if(c>d)
    {
        printf("%d is the big ",c);
    }
    else
    {
        printf("%d is the big ",d);
    }


}