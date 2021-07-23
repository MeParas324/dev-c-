#include<stdio.h>
int check(int i)
{
	if(i<=45)
	return 10;
	else
	return 10*10;
}
int main()

{
	int i=46;
	printf("%d\n",check(i));
	return 0;
}
