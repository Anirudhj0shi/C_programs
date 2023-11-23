#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char inputText[1000];
    int wordCount = 0, sentenceCount = 0, charCount = 0;
    bool inWord = false;

    printf("Enter a text (press Ctrl+D on a new line to end input):\n");

    while (fgets(inputText, sizeof(inputText), stdin) != NULL) {
        for (int i = 0; inputText[i] != '\0'; i++) {
            char currentChar = inputText[i];
            charCount++;

            if (isspace(currentChar) || ispunct(currentChar)) {
                if (inWord) {
                    wordCount++;
                    inWord = false;
                }

                if (currentChar == '.' || currentChar == '!' || currentChar == '?') {
                    sentenceCount++;
                }
            } else {
                inWord = true;
            }
        }
    }

    printf("Words: %d\n", wordCount);
    printf("Sentences: %d\n", sentenceCount);
    printf("Characters: %d\n", charCount);

    return 0;
}
