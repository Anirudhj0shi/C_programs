#include <stdio.h>

int main() 
{
    int numStudents;  // Number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) 
    {
        char name[50];       // Array to store student's name
        int rollNumber;      // Variable to store roll number
        float marks;         // Variable to store marks

        // Input student's name
        printf("\nEnter student %d's name: ", i + 1);
        scanf(" %[^\n]s", name);  // Notice the space before % to consume the newline

        // Input roll number
        printf("Enter roll number: ");
        scanf("%d", &rollNumber);

        // Input marks
        printf("Enter marks: ");
        scanf("%f", &marks);

        // Display student information
        printf("\nStudent Information for student %d:\n", i + 1);
        printf("Name: %s\n", name);
        printf("Roll Number: %d\n", rollNumber);
        printf("Marks: %.2f\n", marks);
    }

    return 0;
}
