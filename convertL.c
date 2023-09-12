#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int ascii;
    printf("enter the character : ");
    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("\n Character is lower case letter : %C",ch);
        ascii= ch-32;
        printf("\n%c ___character in upper case is___ %c",ch,ascii);
    }
    else 
    printf("invalid char ");
}