#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *ptr;
	int n;
	int i;
	
	printf("Enter the number of characters in the array:\n");
	scanf("%d", &n);
	
	ptr=(char*)malloc(n*sizeof(char));
	
	for(i=0; i<n; i++)
	{
		printf("Enter the Character at %d location in the array:\n", i);
		fflush(stdin);
        scanf("%c",(ptr+i));        //(ptr+i)=&ptr[i]
	}
	for(i=0; i<n; i++)
	{
		printf("The Characters at %d location in the array is %c:\n", i,ptr[i]);
    }
    
    return 0;
    
}
