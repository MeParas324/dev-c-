#include<stdio.h>
#include<string.h>
#define MAX 50

int main()
{
	char name1[]={'P','A','R','A','S','\0'};
	char name2[]="ELSA ";
	char name3[MAX];
	
	printf("Length of name1 =%d\n",(int)strlen(name1));
	printf("Length of name2 =%d\n",(int)strlen(name2));
	printf("Length of name3 =%d\n",(int)strlen(name3));
	
	strcpy(name3,name2);
	printf("Strcpy name3=%s\n",name3);
	
	strcat(name3,name1);
	printf("Strcat name3=%s\n",name3);
	
	if(strcmp(name1,"PARAS ")==0)
	printf("strings are equal");
	else
	printf("strings are not equal");
	
	return 0;
	
	
}
