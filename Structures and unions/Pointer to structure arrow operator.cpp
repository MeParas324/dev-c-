#include<stdio.h>

struct somebody{
	char name[50];
	int age;
	float weight;
};

int main()
{
	struct somebody *sptr,someone;
	
	sptr=&someone;
	
	printf("enter the age , name , weight\n");
	scanf("%s%d%f",sptr->name,&sptr->age,&sptr->weight);
	
	printf(" the name , age , weight\n");
	printf("%s %d %f",sptr->name,sptr->age,sptr->weight);
}
