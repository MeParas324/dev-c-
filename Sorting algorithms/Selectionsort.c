#include<stdio.h>

void printarray(int *a, int n){
	int i;
	for(i = 0; i<n; i++){
		printf(" %d", a[i]);
	}
}

void Selectionsort(int *a, int n){
	
	int temp, indmin, i, j;
	
	for(i = 0; i< n-1; i++){
		
		indmin = i;
		
		for(j = j+1; j<n; j++){
			
			if(a[j]<a[indmin]){
				indmin = j;
				
			}
			temp = a[i];
			a[i] = a[indmin];
			a[indmin] = temp;
			
		}
	}
	

}

int main(){
	
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13
	
	int arr[] = {3, 5, 2, 13, 12};
	int n = 5;
	
	printf("Array before Selection sort....\n");
	printarray(arr, n);
	Selectionsort(arr, n);
	printf("\nArray after Selection sort....\n");
	printarray(arr, n);
	
}
