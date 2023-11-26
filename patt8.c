#include<stdio.h>
void main()
{
    int i,j,a;
    printf("no of lines u want to print in pattern ");
    scanf("%d",&a);
    char c = 'A';
    for ( i = 1; i <= a; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",c);
            
        }
        c+=1;
        printf("\n");
    }
    
}