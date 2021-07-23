#include<stdio.h>

int main()
{
	int si=100;
	int *iptr=&si;
	int **diptr=&iptr;
	
	printf("address of si=%p\n",&si);
	printf("address of iptr=%p\n",&iptr);
	printf("address of diptr=%p\n",&diptr);
	
	printf("address in iptr=%p\n",iptr);
	printf("address in diptr=%p\n",diptr);
	
	printf("si=%d\n",*iptr);
	printf("si=%d\n",**(&iptr));
	printf("si=%d\n",**diptr);
	printf("si=%d\n",***&diptr);
	
	return 0;

}
