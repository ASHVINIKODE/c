#include<stdio.h>
int main()
{
	int age;
	printf("enter your age for the election voting purpose:");
	scanf("%d",&age);
	printf("you have entered %d as your age\n ",age);
	if(age>=18){
		printf("you can vote");
	}else if(age>10){
		printf("you are between 10 to 18,so you cannot vote");
	}
	else{
		printf("you cannot vote");
	}
	return 0;
}