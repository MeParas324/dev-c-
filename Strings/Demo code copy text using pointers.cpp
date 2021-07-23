#include<stdio.h>

int main()
{
	char name1[100]="Welcome";
	char name2[100];
	char *ptr1;
	char *ptr2;
	
	ptr1=name1;
	ptr2=name2;
	
	while(*ptr1 !='\0')
	{
		*ptr2=*ptr1;
		ptr1++;
		ptr2++;
	}
	*ptr2='\0';
	
    printf("Copied string is %s",name2);
		
	return 0;
}
