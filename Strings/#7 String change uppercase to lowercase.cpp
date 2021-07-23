#include<stdio.h>
#define MAX 50
void transform(char *);
int main()
{
	char str[MAX]="Welcome to graphic Era 123& $$";
	
	transform(str);
	
	printf("Transformation is %s",str);
	
	return 0;
}
void transform(char *s)
{
	int i=0;
	
	while(s[i]!='\0')
	{
	   if(s[i]>='A' && s[i]<='Z')
	   s[i]=s[i]+32;
	   
	   else if(s[i]>='a' && s[i]<='z')
	   s[i]=s[i]-32;
	   
	   else
	               ;
	   i++;
	}
}

