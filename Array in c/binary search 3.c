#include<stdio.h>
int binarysearch(int *, int size, int element);

int main()
{
   	int arr[]={1,2,3,6,7,33,44,55,66,99,464,567,3655};
   	int size=sizeof(arr)/sizeof(int);
	int element;
	int search;
	
	printf("Enter the number you want to search:\n");
	scanf("%d", &element);
	
	search=binarysearch(arr,size,element);
	
	if(search!=-1)
	printf("The element %d is found at Position %d", element, search+1); 
	else
	printf("The element %d is not found", element); 
	return 0;
	
}

int binarysearch(int *arr, int size, int element)
{
	int mid,low,high;
	low=0;
	high=size-1;
	//Start searching
	
	
	while ( low <= high )
	{
	mid = ( low + high )/2;
	if(arr[mid]==element)
	{
	  
	   return mid;
	}
	if(arr[mid]<element)
	{
	   low = mid +1;
	}
	else
	{
		high = mid - 1;
	}
	//Searching end
	}
	return -1;

}
