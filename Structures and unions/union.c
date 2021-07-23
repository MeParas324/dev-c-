#include<stdio.h>
#include<string.h>

union workpad{
	float wealth;
	int age;
	char name[8];
	
}temp;

int main()
{
	printf("size of temp=%lu\n",sizeof(temp));
	
	//temp.wealth=100.99;
	//temp.age=18;
	strcpy(temp.name,"Arjun");
	printf("value of age=%d\n",temp.age);
	printf("value of wealth=%6.2f\n",temp.wealth);
	printf("value of name=%s\n",temp.name);
	
	printf("Address of age=%u\n",(void*)(unsigned long)&temp.age);
	printf("Address of wealth=%u\n",(void*)(unsigned long)&temp.wealth);
	printf("Address of name=%u\n",(void*)(unsigned long)&temp.name);
}
