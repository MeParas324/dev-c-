#include <stdio.h>
int pattern(int);
int printpattern(int);

int main()
{
    pattern(5);
}

int printpattern(int n){
	if(n > 0){
		printpattern(n - 1);
		printf("* ");
	}
}
int pattern(int n)
{
	if (n > 0){
		pattern(n - 1);
	}
	printpattern(n);
	printf("\n");
}
