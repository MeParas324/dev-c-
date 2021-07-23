#include<stdio.h>
#include<string.h>

int main()
{
	char months[12][25]={"January","February","March","April",
	                      "May","June","July","August","September",
						  "October","November","December"};
	char *dow[]={"Monday","Tuesday","Wednesday","Thuresday","Friday","Saturday","Sunday"};
	
	printf("Months of the year\n");
	for(int i=0;i<=12;i++)
	  printf("%s\n",months[i]);
	  
	printf("days of the week\n");
	for (int i=0;i<=7;i++)
	  printf("%s\n",dow[i]);
	  
	  return 0;
}
