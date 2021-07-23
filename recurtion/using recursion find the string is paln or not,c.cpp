#include<stdio.h>
int arrlength(char *arr);
void palin(char *, int n);
int main()
{
	int len;
	
	char arr[6] = {'P', 'A', 'R', 'A', 'S', '\0'};
	
	
	len = arrlength(arr);
	
	palin(arr, len);
	
	return 0;
}

int arrlength(char *arr){
	
	int len= 0;
	
    if(*arr == '\0'){
    	return 0;
	}
	else{
		return 1 + arrlength(arr + 1);
	}
}
void palin(char *arr, int n){
	
	int i = 0;
	char arr2[6];
	if(n<0){
		arr2[i] = '\0';
		if(arr[] == arr2[]){
			printf("String is palindrome\n");
		}
		else{
			printf("String is not palindrome\n");
		}
	}
	else{
		arr2[i] = arr[n];
		i++;
		palin(arr, n - 1);
		
	}
}
