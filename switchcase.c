#include <stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d", &age);
    switch (age)
    {
    case 3:
        printf("the age is 3");
        break;
    case 13:
        printf("the age is 13");
        break;
    case 23:
        printf("the age is 23");
        break;
    case 33:
        printf("the age is 33");
        break;
    case 43:
        printf("the age is 43");
        break;

    default:
        printf("age is not 3,13,23,33,43 ");
        break;
    }
    return 0;
}