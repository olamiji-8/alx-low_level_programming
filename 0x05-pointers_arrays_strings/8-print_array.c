#include <stdio.h>
/**
*print_array - A function that prints n elements of an array of integers,
*followed by a new line.
*@a: first arguement
*@n: second arguement
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
printf("%i", a[i]);
if (i != (n - 1))
{
printf("%c", ',');
printf("%c", ' ');
}
i++;
}
printf("%c", '\n');
}
