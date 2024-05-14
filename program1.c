#include <stdio.h>

#define PI 3.14159

// Define the structure for a circle
struct circle {
    float radius;
};

// Function to calculate area of a circle
float calculateArea(struct circle c) {
    return PI * c.radius * c.radius;
}

// Function to calculate perimeter (circumference) of a circle
float calculatePerimeter(struct circle c) {
    return 2 * PI * c.radius;
}

int main() {
    struct circle circle1, circle2;
    float area1, area2, perimeter1, perimeter2;

    // Input for circle 1
    printf("Enter the radius of circle 1: ");
    scanf("%f", &circle1.radius);

    // Input for circle 2
    printf("Enter the radius of circle 2: ");
    scanf("%f", &circle2.radius);

    // Calculate area and perimeter for circle 1
    area1 = calculateArea(circle1);
    perimeter1 = calculatePerimeter(circle1);

    // Calculate area and perimeter for circle 2
    area2 = calculateArea(circle2);
    perimeter2 = calculatePerimeter(circle2);

    // Display results
    printf("\nCircle 1:\n");
    printf("Area: %.2f\n", area1);
    printf("Perimeter: %.2f\n", perimeter1);

    printf("\nCircle 2:\n");
    printf("Area: %.2f\n", area2);
    printf("Perimeter: %.2f\n", perimeter2);

    return 0;
}
