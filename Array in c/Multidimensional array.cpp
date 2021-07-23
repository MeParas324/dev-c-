#include<stdio.h>

int main()
{
	int i;
	
	int marks[3][3]={{2,4,5},
	            {345,56,45},
	            {4,5,6}};
	            
	int roll_num;
	
	printf("enter the roll no between 1-3\n");
	scanf("%d",&roll_num);
	
	for(i=0;i<3;i++)
	{
	printf("The marks of Roll no.%d student in subject %d is %d\n",roll_num, i+1, marks[roll_num-1][i]);		
	}
}
