#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the Number of ekements into the array\n");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter the numebr of elements into th array\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Displaying elements into the array\n");
	for(int j=0;j<n;j++)
	printf(" %d ", a[j]);
}
