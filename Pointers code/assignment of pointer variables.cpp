#include<stdio.h>


int main()
{
	short si=10,sj=20;
	
	short *iptr=&si,*jptr=NULL;
	
	jptr=iptr;
	
	si=10*5;
	
	*iptr=*jptr+si;
	
	iptr=&sj;
	
	*iptr=*iptr+si+sj+*jptr;
	
	printf("value of si=%hi and sj+%hi\n",si,sj);
	printf("value of si=%hi and sj=%hi",*jptr,*iptr);
	
	return 0;
	
	
}
