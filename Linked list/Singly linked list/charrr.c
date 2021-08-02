#include<stdio.h>
#define MAX 100
int main()
{
    int i;
    char str[100];
    int count = 1;
    printf("Enter the string:\n");
    scanf("%s", str);

    for (i = 0; i !='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        count++;
        i++;
    }
    str[i] = '\0';
    printf("%d", count);
    

}
