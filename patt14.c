#include <stdio.h>

int main()
{
    int rows = 5;

    for (int i = 1; i <= rows; i++) 
    {
        for (int j = 1; j <= rows - i + 1; j++) 
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
