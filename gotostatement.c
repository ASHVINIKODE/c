#include <stdio.h>
int main()
{
    int i, j, num;
    // label:
    //     printf("we are inside label\n");
    //     goto end;
    //     printf("hello world");
    //     goto label;
    //     end:
    //     printf("we are at end");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        for (j = 0; j < 10; j++)
        {
            printf("enter the number.enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }

end:

    return 0;
}