#include<stdio.h>

int main()
{
	int n,choice,temp=0;
	int num, num1, i=1;
	int tem=1;
	
	printf("Enter the number of operands you want to do arithmetic operations:\n");
	scanf("%d", &n);
	
	printf("\n.1-Addition(+)\n.2-Substraction(-)\n.3-Division\n.4-Multiplication\n.5-Quit\n");
	printf("Enter your choice between (1-5):\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
		    while(i<=n)
     	    {
		    printf("Enter %d number:\n", i);
		    scanf("%d", &num);
		    temp=temp+num;
		    i+=1;
    	    }
    	printf("The value of addition is %d\n", temp);
    	break;
    	
    	case 2:
		    while(i<=n)
     	    {
		    printf("Enter %d number:\n", i);
		    scanf("%d", &num);
		    if(temp==0)
		    {
		    temp=num-temp;
		    i+=1;
		    continue;
			}
		    temp=temp-num;
		    i+=1;
    	    }
    	printf("The value of Substraction is %d\n", temp);
    	break;
    	
    	case 3:
		    printf("Enter 1st number:\n");
		    scanf("%d", &num);
		    printf("Enter 2nd number:\n");
    	    scanf("%d", &num1);
    	    printf("Division is %d \n",num/num1);
    	break;
    	
    	case 4:
		    while(i<=n)
     	    {
		    printf("Enter %d number:\n", i);
		    scanf("%d", &num);
		    tem=tem*num;
		    i+=1;
    	    }
    	printf("The value of Multiplication is %d\n", tem);
    	break;
    	
    	case 5:
		    default:
		        printf("Wrong choice....");
	}
	
	return 0;
}
