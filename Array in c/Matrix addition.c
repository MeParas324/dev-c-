#include<stdio.h>
#define ROW 10
#define COLUMN 10
void read_array(int x[ROW][COLUMN], int r, int c);
void sum_array(int x[ROW][COLUMN], int y[ROW][COLUMN], int z[ROW][COLUMN], int r, int c);

int main()
{
	int a[ROW][COLUMN];
	int b[ROW][COLUMN];
	int s[ROW][COLUMN];
	int r,c;
	
	printf("Enter the number of rows and columns:\n");
	scanf("%d%d",&r,&c);
	
	printf("Enter the number of elements in array A:\n");
	read_array(a, r, c);
	
	printf("Enter the number of elements in array B:\n");
	read_array(b, r, c);
	
	printf("The sum of Array A and B:\n");
	sum_array(a, b, s, r, c);
	
	return 0;
	
}

void read_array(int x[ROW][COLUMN], int r, int c)
{
	int i,j;
	for(i=0; i<r; i++)
	  for(j=0; j<c; j++)
	    scanf("%d",&x[i][j]);
}
void sum_array(int x[ROW][COLUMN], int y[ROW][COLUMN], int z[ROW][COLUMN], int r, int c)
{
	int i,j;
	for(i=0; i<r; i++)
	{
	  for(j=0; j<c; j++)
	  {
	    z[i][j]=x[i][j]+y[i][j];
	    printf("%d ", z[i][j]);
	  }
	  printf("\n");
	}
}
