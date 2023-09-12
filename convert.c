//to convert days into years week days
#include<stdio.h>
void main()
{
    int nDays, y,m,d;
    printf("input the no of days :");
    scanf("%d",&nDays);
    y = (int) nDays/365;
    nDays=nDays-(365*y);
    m=(int)nDays/30;
    d=(int)nDays-(m*30);
     
    printf("%d year \n %d month \n %d Day",y,m,d);


}