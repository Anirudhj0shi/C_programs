#include <stdio.h>

int main() {
    int rows;
    printf("enter number of rows u want to print ");
    scanf("%d",&rows);
    for (int i = rows; i <= rows && i != 0; i--) 
    {
        for (int j = rows; j >= i; j--) 
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

