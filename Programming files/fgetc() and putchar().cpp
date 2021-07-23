#include<stdio.h>


int main()
{
	FILE *fptr;
	int c;
	
	fptr=fopen("c:\\sample33.txt","r");
	
	if (fptr==NULL)
	{
		printf("error opening file for reading...\n");
		return -1;
	}
	while((c=fgetc(fptr))!=EOF)
	putchar(c);
	
	return 0;
}
