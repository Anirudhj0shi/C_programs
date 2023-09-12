#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
    printf("Character is upper case letter : ");
    else if(ch >= 'a' && ch<= 'z')
    printf("Character is lower case letter : ");
    else
    printf("character is not alphabet  ");
}