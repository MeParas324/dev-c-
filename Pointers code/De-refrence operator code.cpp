#include<stdio.h>

int main()
{
	short si=10;
	char ch='G';
	
	printf("Content in si =%hi\n",si);
	printf("Content in ch =%c\n",ch);
	printf("Content in ch=%d\n",ch);
	
	//Printing the address of si and ch
	printf("Address of si=%p\n",(void*)&si);
	printf("Address of ch=%p\n",(void*)&ch);
	
//	printf("Address of si=%lu\n",(unsigned int)&si); #Error
//	printf("Address of ch=%lu\n",(unsigned int)&ch); #Error
	
	//Alternate way to print the value of si and ch
	printf("Content of si=%hi\n",*&si);
	printf("Content of ch=%c\n",*&ch);
    printf("Content of ch=%d\n",*&ch);
		
	return 0; 
}
//* is called the de-refrence operator
//& is called the refrence operator
