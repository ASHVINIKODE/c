#include <stdio.h>
int main()
//{
// int i = 0;
// do
// {
//     i = i + 1;
//     printf("%d ", i); /* code */
// } while (i < 10 /* condition */);
// return 0;
//}
{
    int num, index = 0;
    printf("enter a number:");
    scanf("%d", &num);
    do
    {
        /* code */ printf("%d\n", index);
        index = index + 1;

    } while (/* condition */ index < num);
    return 0;
}
