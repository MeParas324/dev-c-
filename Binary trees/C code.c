#include<stdio.h>


int main()
{
	int age, year, sex, F, M;
	
	printf("enter the age\n");
	scanf("%d", &age);
	
	printf("enter the year of experience\n");
	scanf("%d", &year);
	
	printf("enter the sex\n");
	scanf("%d", &sex);
	
	if(sex == F)
	{
		if(age>18 && age<22)
		printf("salary is 10000\n");
		
		if(age>22)
		{
			printf("salary is 20000\n");
		}
	}
	
	if(sex == M)
	{
		if(age>18 && age<22)
		printf("salary is 10000\n");
		
		if(age>22)
		{
			printf("salary is 20500\n");
		}
	}
}
