#include<stdio.h>
int* sum(int *a,int *b,int *ans);

int main()
{
	int a=10,b=20,ans;
	int *result;
	
    result=	sum(&a,&b,&ans);
    
    printf("Sum of A + B =%d\n",*result);
    
}
int* sum(int *a,int *b,int *ans)
{
	*ans=*a+*b;
	return(ans);
}
