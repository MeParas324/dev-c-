#include<stdio.h>
int arrlength(char *arr);

int main()
{
	int len;
	
	char arr[6] = {'P', 'A', 'R', 'A', 'S', '\0'};
	
	
	len = arrlength(arr);
	printf("The length of the array is %d\n", len);
	
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
