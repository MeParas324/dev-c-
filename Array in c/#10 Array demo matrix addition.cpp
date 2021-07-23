#include<stdio.h>
#define ROW 10
#define COL 10
void read_array(int x[ROW][COL],int r,int c);
void add_array(int x[ROW][COL],int y[ROW][COL],int z[ROW][COL],int r, int c);
void print_array(int sum[ROW][COL],int r,int c);

int main()
{
   int a[ROW][COL];
   int b[ROW][COL];
   int s[ROW][COL];
   int r,c;
   
   printf("enter the number of rows and columns\n");
   scanf("%d%d",&r,&c);
   
   printf("enter the elements of array a\n");
   read_array(a,r,c);
   
   printf("enter the elements of array b\n");
   read_array(b,r,c);
   
   add_array(a,b,s,r,c);
   
   print_array(s,r,c);
}
void read_array(int x[ROW][COL],int r,int c)
{
	for(int i=0;i<r;i++)
	 for(int j=0;j<c;j++)
	   scanf("%d",&x[i][j]);
	   
}
void add_array(int x[ROW][COL],int y[ROW][COL],int z[ROW][COL],int r, int c)
{
	for(int i=0;i<r;i++)
	  for(int j=0;j<c;j++)
	    z[i][j]=x[i][j]+y[i][j];
}
void print_array(int sum[ROW][COL],int r,int c)
{
	for(int i=0;i<r;i++)   
    {

	  for(int j=0;j<c;j++)
	
	    	printf("%d ",sum[i][j]);
	    	printf("\n");
	}
}
