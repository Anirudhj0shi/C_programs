#include<stdio.h>
void main()
{
    int i =1;
    do 
    {
        if(i%2!=0){
            printf("%d\n",i*i);
            
        }
        i++;

    }
    while(i<=50);
}