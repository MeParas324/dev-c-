#include<stdio.h>

int  main()
{
	int si=100;
	char ch='A';
	
	int *iptr; char *cptr;
	iptr=&si ; cptr=&ch  ;
	
	int **diptr;char **dcptr;
	diptr=&iptr;dcptr=&cptr;
	
	printf("%lu %lu\n",sizeof(si),sizeof(ch));
	printf("%lu %lu\n",sizeof(*iptr),sizeof(*cptr));
	
	printf("%lu %lu\n",sizeof(iptr),sizeof(cptr));
	printf("%lu %lu\n",sizeof(diptr),sizeof(dcptr));
	
	return 0;
	
}
