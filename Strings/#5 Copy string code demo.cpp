#include<stdio.h>
#include<string.h>
#define MAX 50
void make_copy(char o[],char*c);

int main()
{
	char org[MAX]="Bhimtal rocks!!";
	char copy[MAX];
	
	printf("size of copy is %d\n",(int)strlen(org));
	
	make_copy(org,copy);
	
	printf("the value in copy is %s\n",copy);
	printf("size of copy is %d\n",(int)strlen(copy));
	printf("size of copy is %d\n",(int)strlen(org));
	
	return 0;
	
}
void make_copy(char o[],char*c)
{
	int i=0;
	
	while(o[i]!='\0')
	{
		c[i]=o[i];
		i++;
	}
	c[i]='\0';
	
}
