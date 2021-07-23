#include<stdio.h>
#define MAX 50
int compare(char *o,char *c);

int main()
{
	char org[MAX]="Arjun";
	char cop[MAX];
	
	printf("enter the string\n");
	scanf("%s",cop);
	
	if(compare(org,cop)==0)
	printf("Strings are same\n");
	else 
	printf("Strings are not same\n");
	
}
int compare(char *o,char *c)
{
	while((*o==*c)&&(*o!='\0' && *c!='\0'))
	{
		o++;
		c++;
		
	}
	if(*o=='\0' && *c == '\0')
	return 0;
	else 
	return -1;
}
