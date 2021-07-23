#include<stdio.h>
#define ROW 5
#define COLUMN 5
void read_array(int x[ROW][COLUMN], int r, int c);
void sum_row(int x[ROW][COLUMN], int r, int c);

int main()
{
	int a[ROW][COLUMN];
	int r,c;
	
	printf("Enter the number of rows and columns:\n");
	scanf("%d%d", &r,&c);
	
	read_array(a,r,c);
	sum_row(a,r,c);
}
void read_array(int x[ROW][COLUMN], int r, int c)
{
	int i,j;
	
	printf("Enter the elements according to %d row and %d columns in array\n", r, c);
	for(i=0; i<r; i++)
		for(j=0; j<c; j++)
			scanf("%d",&x[i][j]);
		
	
}
void sum_row(int x[ROW][COLUMN], int r, int c)
{
	int sum=0;
	int i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ", x[i][j]);
            sum=sum+x[i][j];
		}
		printf("=>The sum of Row %d is %d\n", i+1,sum);
		sum=0;
	}
}
