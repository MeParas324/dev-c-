#include<stdio.h>

int main()
{
	short si;
	short sj;
	
	//declaring the pointer variables
	short *iptr;  short *jptr;
	
	//Assigning the address of si and sj
	iptr=&si  ;         jptr=&sj;
	
	printf("enter two numbers\n");
	scanf("%hi%hi",iptr,jptr);
	
	//Printing the address of si and sj
	printf("Address of si=%p and sj=%p\n",(void*)&si,(void*)&sj);
	//Alternate way to print the addresses
	printf("Address of si=%p and sj=%p\n",(void*)iptr,(void*)jptr);
    
    //Two ways to printing the values
    printf("Content of si=%hi and sj=%hi\n",si,sj);
	printf("Content of si=%hi and sj=%hi\n",*iptr,*jptr);
	printf("address of si=%p and sj=%p\n",iptr,jptr);
	
	return 0;	
	
}
