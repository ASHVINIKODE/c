#include <stdio.h>

struct employee {
    int id;
    float salary;
    int mobile;
};

int main() {
    struct employee e1, e2, e3;

    printf("Enter ids, salary & mobile no. of 3 employees\n");

    // Read data for the first employee
    printf("Employee 1: ");
    scanf("%d %f %d", &e1.id, &e1.salary, &e1.mobile);

    // Read data for the second employee
    printf("Employee 2: ");
    scanf("%d %f %d", &e2.id, &e2.salary, &e2.mobile);

    // Read data for the third employee
    printf("Employee 3: ");
    scanf("%d %f %d", &e3.id, &e3.salary, &e3.mobile);

    // Display entered results
    printf("\nEntered Results:\n");
    printf("Employee 1: %d %.2f %d\n", e1.id, e1.salary, e1.mobile);
    printf("Employee 2: %d %.2f %d\n", e2.id, e2.salary, e2.mobile);
    printf("Employee 3: %d %.2f %d\n", e3.id, e3.salary, e3.mobile);

    return 0;
}
