#include<stdio.h>
#define MAX 50
struct studentinfo{
	char name[MAX];
	float marks;
};

typedef struct studentinfo Student;

void readinfo(Student *onestudent)
{
	printf("enter the data \n");
	scanf("%s%f",onestudent->name,&onestudent->marks);
}


int main()
{
	Student *sptr,somestudent;
	
	sptr=&somestudent;
	
	readinfo(sptr);
	printf("students details\n");
	printf("Name:%s Marks:%f\n",sptr->name,sptr->marks);
	printf("Name:%s Marks:%f\n",(*sptr).name,(*sptr).marks);
}


