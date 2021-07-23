#include<stdio.h>

int main()
{
	int i=100; char ch='D';
	int*iptr=&i;char*cptr=&ch;
	
	int **diptr=&iptr;
	char **dcptr=&cptr;
	
	//Printing values in different ways
	printf("si=%d  , ch=%c\n",i,ch);
	printf("si=%d  , ch=%c\n",*iptr,*cptr);
	printf("si=%d  , ch=%c\n",**diptr,**dcptr);
	
	//Some more ways to print the values
	printf("si=%d  , ch=%c\n",*&i,*&ch);
	printf("si=%d  , ch=%c\n",**&iptr,**&cptr);
	printf("si=%d  , ch=%c\n",***&diptr,***&dcptr);
	
	return 0;
	
}
