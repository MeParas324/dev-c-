#include<stdio.h>
#define MAX 30
void print_array(int *a, int n);
void pos_neg(int *a, int *b, int n);

int main()
{
     int a[MAX]={34,5,24,-6,-64,53,35,-9,34,-76,-65};
     int b[MAX];
     int total=11;
     
     printf("Printing the unorganized elements...\n");
     print_array(a,total);
     pos_neg(a,b,total);
       printf("\nPrinting the organized elements...\n");
     print_array(a,total);
}
void print_array(int *a, int n)
{
	
	int i=0;
	
	for(i=0;i<n;i++)
	{
		printf(" %d ",*(a+i));
	}
}
void pos_neg(int *a, int *b, int n)
{
	int s=0;
	int e=n-1;
	int i=0;
	
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			a[s]=a[i];
			s++;
		}
		if(a[i]<0)
		{
			a[e]=a[i];
			e--;
		}
	}
}
