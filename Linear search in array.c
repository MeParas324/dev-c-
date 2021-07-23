#include<stdio.h>
int linear_search(int *, int , int);

int main()
{
	int arr[]={1,2,3,6,7,33,44,55,66,99,464,567,3655};
	int size=sizeof(arr)/sizeof(int);
	int element;
	int searchindex;
	
	printf("Enter the number you want to search:\n");
	scanf("%d", &element);
	
	searchindex=linear_search(arr,size,element);
	
	if(searchindex!=0)
	    printf("The element %d was found at location %d", element, searchindex);
	else if(searchindex==0)
		printf("The number %d you are searching is not found", element);
		
	return 0;
	
}
int linear_search(int *a, int size , int element)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(a[i]==element)
			return i;
			
	}
	return 0;
}
