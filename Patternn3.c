#include<stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter the number\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {  
            if(j>i)
            {
			  printf(" ");
			  continue;
		    }
		   	if(j<0){
				printf("\n");
				break;
			}
		    if(j<=i)
		    {
		    	printf(i ," ");
		    	continue;
			}
		
        }
        
        
    }
    
}
