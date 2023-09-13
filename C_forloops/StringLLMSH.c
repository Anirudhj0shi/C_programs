#include <stdio.h>
#include <ctype.h> // For isspace function

int main() {
    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("First letters of each word: ");

    // Assume the first character is the first letter of the first word
    if (inputString[0] != ' ') {
        printf("%c", inputString[0]);
    }

    // Iterate through the string and print the first letter of each word
    for (int i = 1; inputString[i] != '\0'; i++) {
        if (inputString[i - 1] == ' ' && !isspace(inputString[i])) {
            printf("%c", inputString[i]);
        }
    }

    printf("\n");

    return 0;
}
