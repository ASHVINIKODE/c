#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int array[ROWS][COLS];
    int sum = 0, count = 0;
    float average;

    // Input values into the array
    printf("Enter %d x %d array elements:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &array[i][j]);
            sum += array[i][j];
            count++;
        }
    }

    // Calculate average
    average = (float) sum / count;

    // Display the average
    printf("Average of array elements: %.2f\n", average);

    return 0;
}
