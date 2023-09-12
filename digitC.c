#include<stdio.h>
void main()
{
    char ch;
    char C;
    printf("enter the character : ");
    scanf("%c",&ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("entered character is a digit  ");
        C= '*';
        printf("\n %c the digit is converted in %c",ch,C);

    }
    else 
    printf("entered character is not a digit  ");
}
  