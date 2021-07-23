#include <stdio.h>
void pattern(int , int );
int main()
{
    pattern(5, 0);
}
void pattern(int n, int i)
{
    if (n == 0) return; // base case
    if (i < n)
    {
        // prints the column
        printf("* "); // selfwork
        pattern(n, i + 1); // recursion
    } else {
        // prints the row
        printf("\n");; // selfwork
        pattern(n - 1, 0); // recursion
    }
}
