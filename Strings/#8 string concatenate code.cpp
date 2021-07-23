#include<stdio.h>
void join(char *d,char *s);

int main()
{
	char name1[50]="Bhimtal ";
	char name2[50]="cool place";
	
	join(name1,name2);
	
	printf("Concatenation =%s",name1);
	
	
}
void join(char *d,char *s)
{
	int i=0;
	int j=0;
	
	while(d[j]!='\0')j++;
	
	while(s[i]!='\0')
	{
		d[j]=s[i];
		i++;j++;
	}
	d[j]='\0';
}
