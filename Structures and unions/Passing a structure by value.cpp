#include<stdio.h>
struct student_info{
	char name[50];
	int age;
};
void printdata(struct student_info std)
{
	printf("Name =%s,Age=%d",std.name,std.age);
}

int main()
{
	struct student_info sdata={"Shweta",18};
	   printdata(sdata);
	   
	return 0;
}
