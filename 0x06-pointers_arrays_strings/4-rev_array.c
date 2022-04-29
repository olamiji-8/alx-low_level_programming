#include "main.h"
/**
*reverse_array - A function that compares two strings
*@n: First string
*@a: string
*/
void reverse_array(int *a, int n)
{
int i = 0;
int temp;
n -= 1;
while ((n - i) > 0)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--;
}
}
