#include<stdio.h>

void printarray(int *a, int n){
	int i;
	for(i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
}

void merge(int *a, int low, int mid, int high){
	int i, j, k, m, B[100];
	
	i = low;
	j = mid +1 ;
	k = low;
	
	while(i<=mid && j<=high){
		
		if(a[i]<a[j]){
			B[k] = a[i];
			i++;
			k++;
		}
		else{
			B[k] = a[j];
			j++;
			k++;
		}
    }
		
		while(i<=mid){
			B[k] = a[i];
			i++;
			k++;
		}
		while(j<=high){
			B[k] = a[j];
			j++;
			i++;
		}
      for(m = low; m<=high; m++){
      	a[m] = B[m];
	  }
}

void mergesort(int *a, int low, int high){
	int mid;
	if(low<high){
		mid = (low + high)/2;
		mergesort(a, low, mid);
		mergesort(a, mid + 1, high);
		merge(a, low, mid, high);
	}
}

void mergea(int *a, int *b, int n , int m){
	
	int i = 0, j = 0, k = 0;
	int c;
	int B[50];	
	while(i<n && j<m){
		
		if(a[i]<b[j]){
			B[k] = a[i];
			i++;
			k++;
		}
		else{
			B[k] = b[j];
			j++;
			k++;
		}
    }
		
		while(i<n){
			B[k] = a[i];
			i++;
			k++;
		}
		while(j<m){
			B[k] = b[j];
			j++;
			i++;
		}
		
		printf("\nMerged array is...\n");
		for(c = 0; c<m+n; c++){
			printf("%d ", B[c]);
		}
      
}





int main()
{
    int a[] = {90, 100, 4, 14, 4, 15, 60};
    int b[] = {9, 1, 4, 14, 4, 15};
	int n = 7;
	int m = 6;
	
	printf("Before Merge sort array a is...\n");
	printarray(a, n);
	mergesort(a, 0, n-1);
	printf("\nAfter Merge sort array a is...\n");
	printarray(a, n);
	
	printf("\nBefore Merge sort array b is...\n");
	printarray(b, n);
	mergesort(b, 0, n-1);
	printf("\nAfter Merge sort array b is...\n");
	printarray(b, n);
	
	mergea(a, b, n , m);
	
	
}
