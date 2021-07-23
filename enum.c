#include<stdio.h>

enum days { sunday = 8, monday, tuesday, wednesday = 13, thursday, friday, saturday};

int main()
{
	enum days d, e, s, t;
	
	e = sunday;
	
	d = monday;
	
	t = tuesday;
	
	s = saturday;
	
	printf("%d\n", e);
	printf("%d\n", d);
	printf("%d\n", s);
	printf("%d", t);
}
