#include<stdio.h>
struct Student
{
    int rno;
    float per;
    char name[50];
}s;
void main()
{
    int i,size;
    printf("enter the size :  ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("enter roll.no : ");
        scanf("%d",&s.rno);
    
        printf("enter percentage :");
        scanf("%f",&s.per);
        getchar();

        printf("enter name :");
        scanf("%[^\n]s",s.name);
    }
    for(i=0;i<size;i++)
    printf("%d\t%s\t%.2f",s.rno,s.name,s.per);
}

