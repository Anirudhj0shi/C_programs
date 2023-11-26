#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) 
    {
        char c = 'A';
        printf("%c", c);
        
        for (int j = 0; j < i; j++) 
        {
            printf(" ");
        }

        if (i != 0) 
        {
            c += i;
            printf("%c", c);
        }

        printf("\n");
    }
}


