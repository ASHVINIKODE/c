#include <stdio.h>
int main()
{
    int i, a[100]={55,43,67,32,867,213,443,43,21,5}, search,k;
    // printf("enter 10 numbers:");
    // for (i = 0; i < 10; i++)
    // {
    //     scanf("%d", &a[i]);
    // }
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
        printf("number is found at position %d",i+1);
        k++; 
        break;
    }
} if(k==0){
    printf("number is not found");
}
    return 0;
}