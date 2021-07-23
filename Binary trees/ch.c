#include<stdio.h>

int main()
{
	int a =5;
	char ch[10];
	
	printf("enter %d ch\n",a);
	fgets(ch, 10, stdin);
	
	while(ch!='\0')
	printf("%c", ch);
	
	return 0;
}
