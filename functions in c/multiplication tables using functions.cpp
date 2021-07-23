#include<stdio.h>
int get_num(void);
void print_table(int num);


int main()
{
	int num;
	num=get_num();
	print_table(num);
	
}
int get_num(void)
{
	int n;
	printf("enter the number you want the table\n");
	scanf("%d",&n);
	
	return n;
}
void print_table(int num)
{
	for(int i=1;i<=10;i++)
	 printf("%d X %d=%d\n",num,i,num*i);
}
