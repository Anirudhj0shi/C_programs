#include<stdio.h>
void main()
{
    int i;
    char fruits[50] = {"apple", "mango" , "orange" };
    printf("names of the fruits are : \n");
    for(i=0;i<3;i++)
    printf("%s\n",fruits[i]);
}