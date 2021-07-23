#include<stdio.h>
#include<string.h>


int main()
{
    char name[50];
	FILE *fptr;
	int c;
	
	fptr=fopen("c:\\sample33.txt","w");
	
	if (fptr==NULL)
	{
		printf("error opening file for reading...\n");
		return -1;
	}
    do
   {
        printf("Enter the name:\n");
        scanf("%s",name);
        fprintf(fptr,"%s\n",name);
    }while(strlen(name)>1);
    
    fclose(fptr);
    
	return 0;
}
