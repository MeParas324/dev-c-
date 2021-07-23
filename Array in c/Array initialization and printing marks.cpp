#include<stdio.h>
#define SIZE 10

int main()
{
	int roll_num;
	int marks[SIZE]={34,34,67,43,9,76,34,65,24,75};
	
	printf("Enter the roll no of student\n");
	scanf("%d", &roll_num);
	
	while(roll_num>=1 || roll_num<=10)
	{
		if(roll_num>10||roll_num<1)
		{
		printf("you entered number is not in range...");
		break;
	    }
	
	printf("the marks of Roll no %d is %d", roll_num,marks[roll_num-1]);
	break;
    }
	
	return 0;
}
