#include<stdio.h>

typedef struct student{
	char name[20];
	int age;
}sda;


sda read_data(void)
{
     sda boy;
     printf("Enter the name and age of the student:\n");
     scanf("%s%d", boy.name, &boy.age);
     
     return (boy);
}

int main()
{
	sda sdata;
	
	sdata=read_data();
	printf("The name of the student is %s.\n",sdata.name);
	printf("The age of the student is %d.\n", sdata.age);
	
	return 0;
	
	
}
