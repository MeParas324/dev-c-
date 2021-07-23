#include<stdio.h>
void print_star(int max, int limit);


int main()
{
	int total,per_line;
	
	printf("enter the total and per line\n");
	scanf("%d%d",&total,&per_line);
	
	print_star(total,per_line);
	
	return 0;
}
void print_star(int max, int limit)
{
	int j=0;
	
	for(int i=1;i<=max;i++,j++)
	{
		if(j==limit)
		{
			printf("\n");
			j=0;
		}
		printf("*");
	}
}
