#include<stdio.h>
#define MAX 50

typedef struct studentrec{
	char  name[50];
	float mark;
}student;

student record(int i ){
	student ns;
	printf("Name and Marks of student %d:\n",i+1);
	scanf("%s%f",ns.name,&ns.mark);
	return ns;
}
void printrecord(student item)
{
	int i;
	printf("Name and marks of %d student is %s ,%f\n", i+1, item.name, item.mark);

}
int main()
{
	int count ;
	int i;
	
	student class[MAX];
	
	printf("How many students..\n");
	scanf("%d", &count);
	
	for(i=0;i<count; i++)
	class[i]=record(i);
	
	printf("Details are...\n");
	for(i=0; i<count; i++)
	printrecord(class[i]);
	

}

