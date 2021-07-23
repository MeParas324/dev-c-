#include<stdio.h>
#define MAX 50

int main()
{
   char msg [MAX];
   int i;
   
   printf("enter the name\n");
   fgets(msg,MAX-1,stdin);
   
   while(msg[i]!='\n')
   i++	;
   
   msg[i]='\0';
   i=0;
   
   while(msg[i]!='\0')i++;
   printf("length of string is %d\n",i);
   
   return 0;
   
}
