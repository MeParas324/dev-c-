#include<stdio.h>
#include<string.h>
#define MAX 50


int main()
{
	char name[MAX];
	int i=0;
	
	printf("enter the name\n");
	fgets(name,MAX-1,stdin);//	Baburao ganpatrao aapte
	
	while(name[i]!='\0')
	{
	 printf("%c ",name[i]);
	 i++;
    }
    
    printf("Size of name=%d",(int)strlen(name));
    
return 0;
}
