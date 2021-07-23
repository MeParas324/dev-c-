#include<stdio.h>
int srch(int a[],int num, int n);

int main()
{
	int a[50]={2,6,89,4,8,3,6,3,67};
	int srch_num;
	int elements=9;
	
	printf("Enter the number you want to search in array\n");
	scanf("%d", &srch_num);
	
	srch(a,srch_num,9);
	
}

int srch(int a[],int num, int n)
{
  	int i;
	for(i=0;i<n;i++)
    if(a[i]==num)
	{
		printf("Number %d found in location %d", num,i+1);
		return 1;
	}
	if(i==n)
	printf("Number %d is not found", num);
}
