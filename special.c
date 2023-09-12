#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);
    if (ch == '$' || ch == '@')
    printf("its the desired char");
    else
    printf("not the desired one ");
}