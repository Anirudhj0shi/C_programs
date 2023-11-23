#include <stdio.h>

int main() {
    int score;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    if (score >= 90 && score <= 100) {
        printf("Grade: A\n");
        printf("Excellent! Keep up the good work.\n");
    } else if (score >= 80 && score < 90) {
        printf("Grade: B\n");
        printf("Good job! You are doing well.\n");
    } else if (score >= 70 && score < 80) {
        printf("Grade: C\n");
        printf("You are making steady progress.\n");
    } else if (score >= 60 && score < 70) {
        printf("Grade: D\n");
        printf("You need to improve your performance.\n");
    } else if (score >= 0 && score < 60) {
        printf("Grade: F\n");
        printf("You have failed. Please study harder.\n");
    } else {
        printf("Invalid input! Please enter a score between 0 and 100.\n");
    }

    return 0;
}
