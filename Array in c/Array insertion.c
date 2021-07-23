#include<stdio.h>
void displayarray(int arr[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");
}

int sortinsert(int arr[],int size,int element,int capacity,int index)
{
	int i;
	if(size>=capacity)
	{
		return -1;
	}
	for (i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
		
	}
	arr[index]=element;
	return 1;
	
	
}

int main()
{
	int arr[100]={7,8,12,27,88};
	int size=5, element=34, index=3;
	displayarray(arr,size);
	sortinsert(arr,size,element,100,index);

	size+=1;
	displayarray(arr,size);
	
	
	
	return 0;
}




