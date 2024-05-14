#include<stdio.h>
int main(){
    int i;
    //array declaration
    int RollNo[10];
    //taking inputs
    for (i=0;i<10;i++)
    scanf("%d", &RollNo[i]);
    //printing
    for ( i=0;i<10;i++)
printf("%d ",RollNo[i]);
return 0;
}