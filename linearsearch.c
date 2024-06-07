#include <stdio.h>
int main()
{
    int i, a[100], search;
    printf("enter 10 numbers:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the number that you want to search:");
    scanf("%d", &search);
    // if (a[0] == search)
    // {
    //     printf("number is found");
    // }
    // if (a[1] == search)
    // {
    //     printf("number is found");
    // }
    // if (a[2] == search)
    // {
    //     printf("number is found");
    // }
    // if (a[3] == search)
    // {
    //     printf("number is found");
    // }
    // if (a[4] == search)
    // {
    //     printf("number is found");
    // }
for(i=0;i<10;i++){
    if(a[i]==search){
        printf("number is found");
    }
}
    return 0;
}