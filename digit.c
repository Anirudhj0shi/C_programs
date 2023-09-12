#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);

    if (ch >= '0' && ch <= '9')
    printf("entered character is a digit  ");
    else 
    printf("entered character is not a digit  ");
}
    