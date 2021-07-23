#include<stdio.h>
#define MAX 20

void len(const char *str);
int main()
{
	char str[MAX] = {'P', 'A', 'R', 'A', 'S', '\0'};
	
	len(str);
	
}

void len(const char *str){
	int length=0, i;
	
	for(i = 0; str[i]!='\0'; i++){
		length++;
	}
	printf("Length is %d\n", length);
}
