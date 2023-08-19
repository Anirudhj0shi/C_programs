//switch area option program ......

#include<stdio.h>
#define PI 3.14
void main()
{
    char c;
    printf("to print area of rectangle R/r\n");
    printf("to print area of circle C/c\n");
    printf("for exit E/e\n");
    printf("\n enter the code : ");
    scanf("%c",c);
    int l,b,r;
    

    switch (c)
    {
    case 'R': 
    case 'r':
            printf("enter the length and breath :\n");
            scanf("%d%d",&l,&b);
            printf("%d this is the area of rectangle ",l*b);
        break;

    case 'C':
    case 'c':
            printf("\n enter the radius ;");
            scanf("%d",r);
           
            printf("%d \n this is the area of circle ",PI*r*r);
        break;
    case 'E':
    case 'e':
            printf("\n thanks for visiting : ");
        break;

    default:
        printf("\n invalid selection");
        break;

    }
}