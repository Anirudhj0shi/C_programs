#include<stdio.h>
void main()
{
    int i,j,a;
    printf("no of lines u want to print in pattern ");
    scanf("%d",&a);
    char c = 'a';
    for ( i = 0; i <= a; i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",c);
            c+=1;
        }
        printf("\n");
    }
    
}