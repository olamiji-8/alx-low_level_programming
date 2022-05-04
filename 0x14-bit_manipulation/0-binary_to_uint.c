#include "main.h"

/**
 *power - return the value of 2 to the power of p.
 *@p: an int
 *Return: the vakue of 2 to the power of p.
 */

unsigned int power(unsigned int p)
{
unsigned int power = 1;
if (p == 0)
	return (1);
for (; p >= 1; p--)
{
power *= 2;
}
return (power);
}

/**
 *binary_to_uint - converts a binary number to an unsigned int.
 *@b: pointer to a string 0 and 1 char
 *Return: the converted numbers or 0 if an char is not 0/1
 */

unsigned int binary_to_uint(const char *b)
{
int len;
unsigned int num = 0;
int i = 0;
if (b == NULL)
{
	return (0);
	exit(98);
}
for (len = 0; b[len]; len++)
{
if (b[len] < 48 || b[len] > 49)
{
return (0);
exit(98);
}
}
len = len - 1;
for (; len >= 0;)
{
num += ((b[i] - 48)  * power(len));
i++;
len--;
}
return (num);
}
