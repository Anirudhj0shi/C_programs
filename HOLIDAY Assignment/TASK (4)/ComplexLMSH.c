#include <stdio.h>

// Define a structure to represent complex numbers
struct Complex {
    double real;
    double imag;
};

// Function to add two complex numbers
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;

    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;

    return result;
}

int main() {
    struct Complex num1, num2, sum;

    // Input the first complex number
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%lf %lf", &num1.real, &num1.imag);

    // Input the second complex number
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%lf %lf", &num2.real, &num2.imag);

    // Add the two complex numbers
    sum = addComplex(num1, num2);

    // Display the result
    printf("Sum of the two complex numbers: %.2lf + %.2lfi\n", sum.real, sum.imag);

    return 0;
}
