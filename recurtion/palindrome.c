#include<stdio.h>
int arrlength(char *arr);
void palin(char *, int n, int i);
int main()
{
	int len;
	
	char arr[6] = {'N', 'A', 'M', 'S', 'N', '\0'};
	
	
	len = arrlength(arr);
	
	palin(arr, len-1, 0);
	
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
void palin(char *arr, int n, int i){
	if(i>n){
		printf("String is palindrome\n");
	}
	else{
		if(arr[i] == arr[n]){
		i++;
		palin(arr, n - 1, i);
	    }
	    else{
	    	printf("String is not palindrome\n");
		}
		
	}
}
