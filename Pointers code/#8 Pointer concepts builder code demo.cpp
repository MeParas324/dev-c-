#include<stdio.h>

int main()
{
	int age=18;
	int *sptr=&age;
	
	printf("age via si=%d\n",age);
	printf("age via sptr=%d\n",*sptr);
	
	int **dptr=NULL;
	dptr=&sptr;
	printf("age via dptr=%d\n",**dptr);
	printf("age via &dptr=%d\n",***&dptr);
	
	int ***tptr=NULL; 
	tptr=&dptr;
	printf("address via tptr=%d\n",***tptr);
	printf("address via &tptr=%d\n",****(&tptr));
	
	return 0;
	
	
}


	

