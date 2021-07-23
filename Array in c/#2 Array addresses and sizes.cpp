#include<stdio.h>
#define MAX 40
void print_addr(int *x,int N);

int main()
{
	int a[MAX]={10,20,30}; //a=&a=&a[0]
	
	printf("Array a address in main is %p\n",(void*)&a);
	print_addr(a,3);
	printf("Arrary a address in main is %p\n",(void*)a);
	
	
}
void print_addr(int *x,int N)
{
	for(int i=0;i<N;i++)
	  printf("Address of pointer x is x[%d] is %p\n",i,(void*)&x[i]);
	  
	  printf("address of pointer x is %p\n",(void*)&x);
	  printf("address in pointer x is %p\n",(void*)x);
	  printf("sizeof pointer variable variable is %lu\n",(unsigned long)sizeof(x));
	  
}
