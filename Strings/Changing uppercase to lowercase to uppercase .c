#include<stdio.h>
#define MAX 30
void lwr(char *arr);
void upr(char *arr);

int main()
{
	int i;
	
	char arr[MAX] = {'P', 'a', 'R', 'A', 's', 't', 'A', 'N', 'u', 'J', 'a', '\0'};
	
	printf("Enter your option:\n");
	printf("\n1.Lower case\n");
	printf("\n2.Upper case\n");
	scanf("%d", &i);
	
	if(i == 1){
		lwr(arr);
	}
	else if(i == 2){
		upr(arr);
	}
	else{
		return ;
	}
    printf("%s", arr);
	
}

void lwr(char *arr){
	int i;
	
	for(i = 0; arr[i] != '\0'; i++){
		
		if(arr[i]>='A' && arr[i]<= 'Z')
			arr[i] = arr[i] + 32;
	}
	
}

void upr(char *arr){
	int i;
	
	for(i = 0; arr[i] != '\0'; i++){
		
		if(arr[i]>='a' && arr[i]<= 'z')
			arr[i] = arr[i] - 32;
	}
	
}
