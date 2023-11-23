#include <stdio.h>

int main() {
    int originalNumber, reversedNumber = 0, remainder, temp;

    printf("Enter an integer: ");
    scanf("%d", &originalNumber);

    temp = originalNumber;

    do {
        remainder = temp % 10;        // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        temp = temp / 10;            // Remove the last digit
    } while (temp != 0);

    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
