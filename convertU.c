#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int ascii;
    printf("enter the character : ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\n Character is upper case letter : %C",ch);
        ascii= ch+32;
        printf("\n%c ___character in lower case is___ %c",ch,ascii);
    }
    
    else
    printf("invalid character ");
}