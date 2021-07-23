#include<stdio.h>
#define ROW 10
#define COL 10
void sum_array(int x[ROW][COL],int r,int c);
void read_array(int x[ROW][COL],int r,int c);

int main()
{
	int a[ROW][COL];
	int r,c;
	
	printf("enter the number of rows and columns\n");
	scanf("%d%d",&r,&c);
	
	read_array(a,r,c);
	sum_array(a,r,c);
}
void read_array(int x[ROW][COL],int r,int c)
{
	printf("enter the %d rows and %d columns\n");
	for(int i=0;i<r;i++)
	  for(int j=0;j<c;j++)
	    scanf("%d",&x[i][j]);
}
void sum_array(int x[ROW][COL],int r,int c)
{
	int sum=0;
	printf("sum of rows......\n");
	
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",x[i][j]);
			sum=sum+x[i][j];
		}
		printf("=>Rows %d sum is %d\n",i+1,sum);
		sum=0;
	}
	
}
