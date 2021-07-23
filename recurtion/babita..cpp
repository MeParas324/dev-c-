#include<stdio.h>

struct student
{
	int rollno;
	char name[10];
	int class;
};

struct class
{
	int classno;
	int noofstudents;
	char school[50];
};

struct school
{
	int noofstudents;
	char standard[20];
	char name[50]; 
};
union input
{
	struct student s;
	struct class c;
	struct school sc;
};
int main()
{
	int ch;
	union input i;
	printf("enter the input");
	printf("\n 1. student");
	printf("\n 2. class");
	printf("\n 3. school");
	printf("\n 4. Wrong choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			scanf("%d%s%d",&i.s.rollno,&i.s.name,&i.s.class);
			printf("\n %d%s%d",i.s.rollno,i.s.name,i.s.class);
		    break;
		case 2:
			scanf("%d%d%s",&i.c.classno,&i.c.noofstudents,&i.c.school);
			printf("\n %d%d%s",i.c. classno,i.c.noofstudents,i.c.school);
			break;
		case 3:
			scanf("%d%s%s",&i.sc.noofstudents,&i.sc.standard,&i.sc.name);
			printf("\n %d%s%s",i.sc.noofstudents,i.sc.standard,i.sc.name);
			break;
		default:
				printf("invalid input" );
				
	}
}
