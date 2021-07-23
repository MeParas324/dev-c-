#include<stdio.h>
void display(int arr[], int n);
int deletion(int arr[], int size, int capacity, int index);

int main()
{
	int arr[100]={34,5,3,45,1,245};
	int size=5, index=5;
	display(arr,size);
	deletion(arr, size, 100, index);
	size-=1;
	display(arr,size);
	
	return 0;
	
}
int deletion(int arr[], int size, int capacity, int index)
{
	int i;
	
	if(index>=capacity)
	{
		return -1;
	}
	for(i=index; i < size-1; i++)
	{
		arr[i]=arr[i+1];
	}
}

void display(int arr[], int n)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");
}
