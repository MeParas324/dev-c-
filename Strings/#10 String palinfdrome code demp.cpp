#include<stdio.h>
#include<string.h>
#define MAX 50

int main()
{
	char str[MAX];
	int i=0,j;
	
	printf("enter the string to check palindrome\n");
	scanf("%s",str);
	
	j=strlen(str)-1;
	
	while(i<=strlen(str)/2)
	{
		if(str[i]!=str[j])
		break;
	    
		i++;j--;
			
	}
	if(i>=j)
	printf("String is palindrome\n");
	else 
	printf("string is not palindrome\n");
	
	return 0;
	
}


