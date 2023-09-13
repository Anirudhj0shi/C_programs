#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int power = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, power);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int start, end;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
