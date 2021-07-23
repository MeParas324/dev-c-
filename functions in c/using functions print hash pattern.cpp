#include<stdio.h>
#define rows 5
void hash_pattern(void );


int main()
{
	
	hash_pattern();
	
}
void hash_pattern(void)
{
	int spaces;
	int temp=spaces=rows;
	for(int i=1;i<=rows;i++)
	{
		while(--spaces>1)
		printf(" ");
		
		for(int j=1;j<=i;j++)
		printf("# ");
		
		printf("\n");
		temp--;
		spaces=temp;
	}
}
