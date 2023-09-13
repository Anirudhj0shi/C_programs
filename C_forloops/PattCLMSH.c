#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int space = 1; space <= n - i; space++) {
            printf("   ");
        }

        // Print numbers from 1 to i
        for (int num = 1; num <= i; num++) {
            printf("%d", num);

            // Add spaces between numbers
            if (num < i) {
                printf(" ");
            }
        }

        // Print the character (A, B, C, ...)
        char ch = 'A' + i - 1;
        printf(" %c ", ch);

        // Print numbers in reverse order from i down to 1
        for (int num = i; num >= 1; num--) {
            printf("%d", num);

            // Add spaces between numbers
            if (num > 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}

