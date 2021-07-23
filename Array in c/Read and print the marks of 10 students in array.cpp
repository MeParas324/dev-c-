#include<stdio.h>
#define MAX 10

int main()
{
	int marks[MAX];
	
	printf("Enter the marks of 10 students\n");
	for (int i=0;i<10;i++)
	{
		scanf("%d",&marks[i]);
	}
	
	printf("printing the marks of 10 students\n");
	for (int j=0;j<10;j++)
	{
		printf("marks of %d student is %d\n",j+1,marks[j]);
	}
	
}
