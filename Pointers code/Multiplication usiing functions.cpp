#include<stdio.h>

int main()
{
	short i,j,prod;
	
	short *iptr=&i ; short *jptr=&j;
	
	printf("enter two numbers\n");
	scanf("%hi%hi",iptr,jptr);
	
	prod=*iptr**jptr;
	
	printf("%hi X %hi=%hi",i,j,prod);
	
	return 0;
}
