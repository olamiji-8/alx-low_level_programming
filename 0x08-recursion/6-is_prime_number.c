#include "main.h"
/**
*is_prime - a function that returns 1 if the input
*integer is a prime number, otherwise return 0
*@n: Arguement
*@i: Arguement2
*@c: Arguement3
*Return: returns the 1 or 0 depending on if prime or not
*/

int is_prime(int n, int i, int c)
{
if (c == 2 && i > n)
{
return (1);
}
if (i > n)
{
return (0);
}
if (n % i == 0)
{
return (is_prime(n, i + 1, c + 1));
}
if (n % i != 0)
{
return (is_prime(n, i + 1, c));
}
return (0);
}

/**
*is_prime_number - a function that returns 1 if the input
*integer is a prime number, otherwise return 0
*@n: Arguement
*Return: returns the 1 or 0 depending on if prime or not
*/

int is_prime_number(int n)
{
int i = 1;
int c = 0;
if (n <= 1)
return (0);
return (is_prime(n, i, c));
}
