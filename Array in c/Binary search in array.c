#include<stdio.h>
int Bsearch(int *, int, int);

int main()
{
   	int arr[] ={3,6,7,30,44,66,98};
   	int size = 7;
	int element;
	
	printf("Enter the number you want to search:\n");
	scanf("%d", &element);
	
	Bsearch(arr,size,element);
		
	return 0;
	
}

int Bsearch(int *arr, int size, int element)
{
	int mid,low,high;
	low=0;
	high=size-1;
	
	while ( low <= high )
	{
	mid = ( low + high )/2;
	if(arr[mid]==element)
	{
	   printf("The element %d was found at location %d", element, mid+1); 
	   return 0;
	}
	if(arr[mid]<element)
	{
	   low = mid +1;
	}
	else
	{
		high = mid - 1;
	}
	}
	return -1;

}
