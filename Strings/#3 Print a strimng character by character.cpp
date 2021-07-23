#include<stdio.h>
#define MAX 50


int main()
{
	char name[MAX];
	int i=0;
	
	printf("enter the name\n");
	scanf("%s",name); //	Baburao ganpatrao aapte
	
	while(name[i]!='\0')
	{
	 printf("%c ",name[i]);
	 i++;
    }
    
return 0;
}
