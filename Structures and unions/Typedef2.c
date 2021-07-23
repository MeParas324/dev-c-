#include<stdio.h>
typedef struct student_info{
	char name[50];
	int age;
}stu;
void printdata(stu std)
{
	printf("Name =%s,Age=%d",std.name,std.age);
}

int main()
{
	   stu sdata={"Shweta",18};
	   printdata(sdata);
	   
	return 0;
}
