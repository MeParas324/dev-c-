#include<stdio.h>
#define MAX 50
int srch_array(int *x,int n, int srch_num);
void read_array(int *x,int n);

int main()
{
    int a[MAX];
	int n;
	int srch_num;
	
	printf("enter the number of elements into the array\n");
	scanf("%d",&n);
	
	read_array(a,n);
	
	printf("enter the number you want to searched \n");
	scanf("%d",&srch_num);
	
	srch_array(a,n,srch_num);
		
}
void read_array(int *x,int n)
{
	printf("enter the %d numbers into the array\n",n);
	for(int i=0;i<n;i++)
	scanf("%d",&x[i]);
	
}
int srch_array(int *x,int n, int srch_num)
{
	for(int i=0;i<n;i++)
	if(x[i]==srch_num)
	 {
	 	printf("Search number %d is found at location %d",srch_num,i+1);
	 	return 0;
     }
     printf("Serach number %d is not found ",srch_num);
}
