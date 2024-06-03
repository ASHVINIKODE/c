#include<stdio.h>
#include<string.h>
struct student
{
    int rollno;
    char name[50];
    int marks;
    float percentage;
};
int main(){
    int x;
    struct student y;
    y.rollno=5;
    strcpy(y.name,"priya");
    y.marks=98;
    y.percentage=98.7;
    printf("Roll no:%d\n",y.rollno);
    printf("Name:%s\n",y.name);
    printf("Marks:%d\n",y.marks);
    printf("percentage:%f\n",y.percentage);
    return 0;

}