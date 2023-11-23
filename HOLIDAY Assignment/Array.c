
#include <stdio.h>

int maxSumWithRotation(int A[], int n) {
    int initial_sum = 0;
    int current_rotation = 0;
    int max_sum = 0;

    // Calculate the initial sum
    for (int i = 0; i < n; i++) {
        initial_sum += i * A[i];
    }

    for (int i = 0; i < n; i++) {
        current_rotation += i * A[i];
    }

    max_sum = current_rotation;

    for (int i = 1; i < n; i++) {
        current_rotation = current_rotation + (n * A[i - 1]) - (initial_sum - A[i - 1]);

        if (current_rotation > max_sum) {
            max_sum = current_rotation;
        }
    }

    return max_sum;
}

int main() 
{
    int A[] = {8,3,1,2};
    int n = sizeof(A) / sizeof(A[0]);

    int result = maxSumWithRotation(A, n);
    printf("Maximum sum of i * A[i] is %d\n", result);

    return 0;
}
