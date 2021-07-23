#include<stdio.h>
#define MAX 20
struct student{
	char name[MAX];
	float marks;  
};
typedef struct student stud;

void readdata(stud *onestudent){
	printf("Enter the data of the student:\n");
	scanf("%s%f", (*onestudent).name, &(*onestudent).marks);
}
int main()
{
	stud *sptr, astudent;
	
	sptr=&astudent;
	
	readdata(sptr);
	
	printf("The data of student is %s %f:", (*sptr).name, (*sptr).marks);
	
}
