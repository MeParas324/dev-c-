#include<stdio.h>


int main()
{
	int age=18;
	
	printf("Age is =%d\n",age);
	printf("Address of age is %p\n",(void*)&age);
	printf("finding the value of age by usimg de-refrence operator =%d\n",*&age);
	
	int *ptr;  ptr=&age;
	
	printf("address at ptr=%p\n",ptr);
	printf("address of ptr is %p\n",(void*)&ptr);
	printf("content /value refrred by ptr=%d",*ptr);
	
	return 0;
}
