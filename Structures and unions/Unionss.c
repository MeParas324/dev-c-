#include<stdio.h>

struct student{
	int rollno;
	char name[10];
	int class;
};

struct class{
	int classno;
	int noofstudent;
	char school[30];
};

struct school{
	int noofstudent;
	char standard[20];
	char name[30];
};

union input{
	struct student s;
	struct class c;
	struct school sc;
};

int main(){
	
	int ch;
	union input i;
	printf("Enter your choice:\n");
	printf("\n.1.Student");
	printf("\n.2.Class");
	printf("\n.3.School\n");
	scanf("%d", &ch);
	
	switch(ch){
		case 1:
			printf("Enter the details of student:\n");
			scanf("%d%s%d", &i.s.rollno, &i.s.name, &i.s.class);
			printf("%d %s %d", i.s.rollno, i.s.name, i.s.class);
			break;
		
		case 2:
			printf("Enter the details of class:\n");
			scanf("%d%d%s", &i.c.classno, &i.c.noofstudent, &i.c.school);
			printf("%d %d %s", i.c.classno, i.c.noofstudent, i.c.school);
			break;
			
		case 3:
			printf("Enter the details of school\n");
			scanf("%d%s %s", &i.sc.noofstudent, &i.sc.standard, i.sc.name);
			printf("%d %s %s", i.sc.noofstudent, i.sc.standard, i.sc.name);
			break;
			
		default:
			printf("Wrong choice\n");
			
}
}
