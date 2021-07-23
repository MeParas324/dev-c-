#include<stdio.h>
#define MAX 50


int main()
{
	char name1[]={'P','A','R','A','S','\0'};
	char name2[]="ELSA";
	char name3[MAX];
	
	printf("enter a number\n");
	scanf("%s",&name3);
	
	printf("Name1=%s\nName2=%s\nName3=%s",name1,name2,name3);
	
	return 0;
	
}
