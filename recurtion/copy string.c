#include<stdio.h>
#define MAX 30
void copy(char *arr, int);

int main()
{
	
	char arr[MAX] = {'P', 'a', 'R', 'A', 's', 't', 'A', 'N', 'u', 'J', 'a', '\0'};
	
    copy(arr, 0);
	
}

void copy(char *arr, int i){
	
	char arr2[MAX];
	
	if(arr[i] == '\0'){
		arr2[i] = '\0';
		printf("New array is ...\n");
		printf("%s", arr2);
		return ;
	}
	
	else if(arr2[i] = arr[i])
	copy(arr, ++i);
	
}
