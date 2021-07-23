#include<stdio.h>
#define MAX 50

struct student{
	char name[MAX];
	float marks;
};
typedef struct student stu;

void readdata(stu *onestudent){
	printf("Enter the data to the students..\n");
	scanf("%s%f", (*onestudent).name, &(*onestudent).marks);
}
printdata(stu stud){
	printf("The name and roll no of the student is %s, %f",stud.name, stud.marks);
}
int main()
{
	stu stud;
	readdata(&stud);
	
	printf("printing details...\n");
	printdata(stud);
	
}
