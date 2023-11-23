#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);

    int currentNum = 2;  // Starting from the first prime number
    int row, col;

    for (row = 1; row <= n; row++) {
        // Print spaces before prime numbers
        for (col = 1; col <= n - row; col++) {
            printf("   ");
        }

        // Print prime numbers for the current row
        for (col = 1; col <= row; col++) {
            while (!isPrime(currentNum)) {
                currentNum++;  // Find the next prime number
            }
            printf("%3d  ", currentNum);
            currentNum++;
        }

        printf("\n");
    }

    return 0;
}
