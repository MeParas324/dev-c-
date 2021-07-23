#include<stdio.h>
#define MAX 10
void read_array(int *m,int n);
void print_array(int *m,int n);

int main()
{
	int a[MAX];
	int N;
	
	printf("number of elements into the array\n");
	scanf("%d",&N);
	
	read_array(a,N);
	print_array(a,N);
	
}
void read_array(int *m,int N)
{
    printf("enter the %d elements into the Array\n",N);
    for(int i=0;i<N;i++)
      scanf("%d",&m[i]);
}
void print_array(int *m,int N)
{
	printf("Printing %d elements into the array\n",N);
	for(int i=0;i<N;i++)
	  printf("%d\n",m[i]);
}
