#include<stdio.h>


int main()
{
	char name[100]="GEU";
	char *ptr="GEHU";
	
	//ptr='H'
	ptr=name;
	*ptr='H';
	
	printf("%s",name);
	
	return 0;
}
