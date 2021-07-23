#include<stdio.h>
#define MAX 50
void slarge(int *x,int n);
void read_array(int *x,int n);

int main()
{
	int a[MAX];
	int n;
	
	printf("enter the number of elements into array\n");
	scanf("%d",&n);
	
	read_array(a,n);
	
	slarge(a,n);
}
void read_array(int *x,int n)
{
	int i;
	printf("enter the %d elements into the array\n",n);
	for(i=0;i<n;i++)
	  scanf("%d",&x[i]);
	  
}
void slarge(int *x,int n)
{
	int i;
	int large;
	int slarge;

     
    if(x[0]>x[1])
    {
        large=x[0];
        slarge=x[1];
    }
    else
    {
    	large=x[1];
    	slarge=x[0];
	}
	for(i=2;i<n;i++)
	{
		if(x[i]>large)
		{
			slarge=large;
			large=x[i];
		
		}
		else if(x[i]>slarge)
			slarge=x[i];
	}
		printf("Second largest is %d",slarge);
}
