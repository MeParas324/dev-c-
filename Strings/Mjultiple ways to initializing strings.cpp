#include<stdio.h>

int main()
{
	char name1[]={'G','E','U','\0'};
	  printf("%s\n",name1);
	
	char name2[5]={'G','E','U','\0'};
	  printf("%s\n",name2);
	  
	char name3[]="GEU";
	  printf("%s\n",name3);
	  
	char name4[5]="GEU ";
	  printf("%s\n",name4);
	  
	char name5[5]="GEHUD";
	  printf("%s\n",name5);
	  
	char *ptr="GEHU";
	  printf("%s\n",ptr);
	  
	char ptr1[20]="GEHU";
	  printf("%s\n",ptr1);
	  
	return 0;
}
