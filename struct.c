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
    struct student *k,*l;
    k=(struct student*)malloc(sizeof(struct student));
    k->roll=34;
    k->name='riya';
    k->marks=88;
    k->percentage=98;
    }