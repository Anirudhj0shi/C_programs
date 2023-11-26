#include <stdio.h>

int main() {
    int r = 5;

    // Print the sequence in descending order
    for (int i = 1; i <= r; i++) {
        char c = 'A';
        for (int j = 1; j <= r - i + 1; j++) {
            printf("%c", c);
            c++;
        }
        printf("\n");
    }

    return 0;
}
