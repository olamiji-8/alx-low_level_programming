#include "main.h"
/**
*swap_int - A function that returns the length of a string.
*@a: this is the first pointer arguement
*@b: this id the second pointer arguement
*/
void swap_int(int *a, int *b)
{
int n1, n2;
n1 = *a;
n2 = *b;
*a = n2;
*b = n1;
}
